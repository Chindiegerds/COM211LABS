#include <iostream>
#include <limits>

using namespace std;

int main()
{
	int n;
	int m;
	cout << "Enter the number of rows (n): ";
	while (!(cin >> n) || n <= 0 || n > 3) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Please enter a positive integer for n: ";
	}
	cout << "Enter the number of columns (m): ";
	while (!(cin >> m) || m <= 0 || m > 3) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Invalid input. Please enter a positive integer for m: ";
	}

	//cout << "The values in the 2D array are:" << endl;

	double** arr = nullptr;
	arr = new double*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new double[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Enter value for arr[" << i << "][" << j << "]: ";
			if (!(cin >> arr[i][j])) {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input. Please enter a number." << endl;
				j--; // Decrement j to retry the same position
			}
		}
	}
	
	cout << endl;
	cout << "The values:" << endl; 

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << endl;
		}
	}
	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	delete[] arr;	
	arr = nullptr;

	return 0;
}
