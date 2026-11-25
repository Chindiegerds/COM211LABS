param(
    [Parameter(Mandatory = $true)]
    [string]$SourceFile,
    [Parameter(Mandatory = $true)]
    [string]$WorkspaceFolder,
    [Parameter(Mandatory = $true)]
    [string]$CompilerPath
)

$workspacePath = [System.IO.Path]::GetFullPath($WorkspaceFolder).TrimEnd('\') + '\'
$sourcePath = [System.IO.Path]::GetFullPath($SourceFile)

if (-not $sourcePath.StartsWith($workspacePath, [System.StringComparison]::OrdinalIgnoreCase)) {
    Write-Error "The active source file must be inside the trusted workspace: $workspacePath"
    exit 1
}

if (-not (Test-Path -LiteralPath $CompilerPath -PathType Leaf)) {
    Write-Error "C++ compiler not found: $CompilerPath"
    exit 1
}

$sourceDirectory = Split-Path -Parent $sourcePath
$cppFiles = @(Get-ChildItem -LiteralPath $sourceDirectory -Filter '*.cpp' -File | Sort-Object Name)
$mainFiles = @($cppFiles | Where-Object {
    Select-String -LiteralPath $_.FullName -Pattern '\bmain\s*\(' -Quiet
})

if ($mainFiles.Count -eq 0) {
    Write-Error "No main function found in C++ files under $sourceDirectory"
    exit 1
}

if ($mainFiles.Count -gt 1) {
    $activeFileIsMain = @($mainFiles | Where-Object { $_.FullName -ieq $sourcePath }).Count -gt 0
    if (-not $activeFileIsMain) {
        Write-Error 'This folder has multiple programs. Open the .cpp file containing the program you want to build.'
        exit 1
    }

    $sourceFiles = @($cppFiles | Where-Object {
        $_.FullName -ieq $sourcePath -or $_.FullName -notin @($mainFiles | ForEach-Object { $_.FullName })
    })
} else {
    $sourceFiles = $cppFiles
}

$outputPath = Join-Path $sourceDirectory "$([System.IO.Path]::GetFileNameWithoutExtension($sourcePath)).exe"
$compilerArguments = @('-fdiagnostics-color=always', '-g') + @($sourceFiles | ForEach-Object { $_.FullName }) + @('-o', $outputPath)

& $CompilerPath @compilerArguments
exit $LASTEXITCODE