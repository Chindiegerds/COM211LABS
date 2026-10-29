#include <iostream>
 using namespace std;


 int main(){

    int numbersArry[5];
    int* pPointer = nullptr;

    //assigns the address of numbersArry to pPointer
    pPointer = numbersArry;
    
    *pPointer = 10; //assigns the value 10 to the first element of numbersArry

    /*increments the pointer to point to the second element*/
    pPointer++;
    *pPointer = 20; //assigns the value 20 to the second element of numbersArry 

    //assigns the address of the third element of numbersArry to pPointer
    pPointer = &numbersArry[2];
    *pPointer = 30; //assigns the value 30 to the third element of numbersArry

    pPointer = numbersArry + 3; //assigns the address of the fourth element of numbersArry to pPointer
    *pPointer = 40; //assigns the value 40 to the fourth element of numbersArry

    pPointer = numbersArry; //assigns the address of the first element of numbersArry to pPointer
    *(pPointer + 4) = 50; //assigns the value 50 to the fifth element of numbersArry

    //iterates through the numbersArry and prints the values of each element
    for (int i = 0; i < 5; i++){
        cout << "numbersArry[" << i << "]: " << numbersArry[i] << endl;
    }




    return 0;
 }