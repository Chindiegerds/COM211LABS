#include <iostream>
using namespace std;

int main(){
	
	int* pPointer = nullptr; // null pointer 
	
	int numbersArray[3] = {10, 20, 30};
	
	pPointer = numbersArray; //assign the address of the first element to pPointer
	
	//outputs the address of the first element
	cout << "Address of pPointer: " << pPointer << "\n";
	cout << "Address of numbersArray[0]: " << numbersArray << "\n";
	
	//outputs the first element using indirection
	cout << "The value at pPointer: " << *pPointer <<endl;
	
	//outputs the second element
	cout << "the value at ++pPointer: " << *(++pPointer) << endl;
	
	//assign address of first element to pPointer
	pPointer = numbersArray;
	
	//this out the value of the first element
	cout << "the value at pPointer++: " << *(pPointer++) << endl;
	
	
	
	return 0;
}