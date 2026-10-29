#include <iostream>
using namespace std;

int main(){
	
	int numberOfElements = 0;
	int* dynamicArray = nullptr;
	
	cout << "How many numbers would you like to type: ";
	cin >> numberOfElements;
	
	dynamicArray = new int[numberOfElements];
	
	if (dynamicArray == nullptr){ // checks if dynamicArray is nullptr
		cout << "Error: memory could not be allocated!" << endl;
	}
	else{
		for (int i = 0; i < numberOfElements; i++){ //prompts the user to enter numbers
			cout << "enter number: ";
			cin >> dynamicArray[i];
		}
		
		//prints the entered numbers back to user
		cout << "You have entered: ";
		for (int i = 0; i < numberOfElements; i++){ //
			cout << dynamicArray[i] << ", ";
		}
		delete[] dynamicArray;
		dynamicArray = nullptr;
	}
	
	return 0;
}