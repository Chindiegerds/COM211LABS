#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
	int* integer = new int();
	string* str = new string();
	
	while(true){
		cout << "enter an integer: ";
		cin >> *integer;
		
		if (cin.fail()){
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}else{
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}
	//cin.ignore(numeric_limits<streamsize>::max());
	
	cout << "enter a string: ";
	getline(cin, *str);
	
	//prints the values
	cout << "integer entered: " << *integer << endl;
	cout << "string entered: " << *str << endl;
	
	
	delete integer;
	integer = nullptr;
	delete str;
	str = nullptr;
	
	
	
	return 0;
}