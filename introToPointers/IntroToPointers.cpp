#include <iostream>
using namespace std;

int main(){
    //declares a pointer and assigns it a values nullptr
    int* pPointer = nullptr;

    int integerVar = 5;

    //assigns the address of integerVar to pPointer
    pPointer = &integerVar;

    //outputs the value of integerVar
    cout << "intergerVar: " << integerVar << endl;

    //outputs the address of integerVar
    cout << "Address of integerVar: " << &integerVar << endl;

    //outputs the address stored in pPointer
    cout << "pPointer: " << pPointer << endl;

    //outputs the address of pPointer
    cout << "Address of pPointer: " << &pPointer << endl;


    return 0;
}