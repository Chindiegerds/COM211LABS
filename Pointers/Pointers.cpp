#include <iostream>
 using namespace std;

 int main(){

    int firstValue;
    int secondValue;

    int* pPointer = nullptr;

    //asssign the addr of firstValue to the pPointer
    pPointer = &firstValue;
    *pPointer = 10;

    //asign the addr of secondValue to the pPointer
    pPointer = &secondValue;
    *pPointer = 20;

    //print the values of firstValue and secondValue
    cout << "firstValue: " << firstValue << "\n";
    cout << "secondValue: " << secondValue << "\n";


    return 0;
 }