#include <iostream>
#include "Area.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include <limits>

using namespace std;
using namespace Shapes;

int main(){
    bool running = true;
    int option;

    while(running){
        //prompts for user
        cout << "Select an option:\n";
        cout << "1. Calculate the area of a square\n";
        cout << "2. Calculate the area of a triangle\n";
        cout << "3. Calculate the area of a circle\n";
        cout << "4. Quit\n";
        cout << "option: ";

        while(!(cin >> option) || option < 1 || option > 4){ //opption validation
            cout << "Invalid input. Try again: ";
            cin.clear();
             cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch(option){ //switch to select option

            case 1: { //calculate area of square
                double side;
                cout << "Enter the side length of the square: ";
                while(!(cin >> side) || side <= 0){
                    cout << "Invalid input. Try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                Square square(side);
                double areaSquare = Area::CalculateArea(square);
                cout << "The area of the square is: " << areaSquare << endl;
                cout << endl;
                break;
            }

            case 2: {//calculate area of triangle
                double base, height;
                cout << "Enter the base of the triangle: ";
                while(!(cin >> base) || base <= 0){
                    cout << "Invalid input. Try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Enter the height of the triangle: ";
                while(!(cin >> height) || height <= 0){
                    cout << "Invalid input. Try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                Triangle triangle(base, height);
                double areaTriangle = Area::CalculateArea(triangle);
                cout << "The area of the triangle is: " << areaTriangle << endl;
                cout << endl;
                break;
            }

            case 3: {//calculate area of circle'
                double radius;
                cout << "Enter the radius of the circle: ";
                while(!(cin >> radius) || radius <= 0){
                    cout << "Invalid input. Try again: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                Circle circle(radius);
                double areaCircle = Area::CalculateArea(circle);
                cout << "The area of the circle is: " << areaCircle << endl;
                cout << endl;
                break;
            }

            case 4: {
                running = false;
                break;
            }
        }

    }

    return 0;
}