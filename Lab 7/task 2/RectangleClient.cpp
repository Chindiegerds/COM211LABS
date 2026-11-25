#include <iostream>
#include "Rectangle.h"
#include <limits>

using namespace std;

int main(){
    float width, length;

    cout << "Enter the width of the rectangle: ";
    while(!(cin >> width)){//checks if the input is valid
        cout << "Invalid input. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter the length of the rectangle: ";
    while(!(cin >> length)){//checks if the input is valid
        cout << "Invalid input. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    // Create a Rectangle object and set its width and length
    Rectangle rect;
    rect.setWidth(width);
    rect.setLength(length);
    cout << "The area of the rectangle is: " << rect.CalculateArea() << endl;


    cout << "\n";
    float newWidth, newLength;
    cout << "Enter the width of the new rectangle: ";
    while(!(cin >> newWidth)){//checks if the input is valid
        cout << "Invalid input. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Enter the length of the new rectangle: ";
    while(!(cin >> newLength)){//checks if the input is valid
        cout << "Invalid input. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    //creates another Rectangle object with the new width and length using the overloaded constructor
   Rectangle rect2(newWidth, newLength);
    cout << "The new area of new rectangle is: " << rect2.CalculateArea() << endl;
    return 0;

}
