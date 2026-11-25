#include <iostream>
using namespace std;

int main(){
	int x = 3;
	//increment the value of x after assigning the initial value to y
	int  y = x++;
	
	cout << "X: " << x << endl;  // x is 4
	cout << "Y: " << y << endl; // y is 3
	
	return 0;
}