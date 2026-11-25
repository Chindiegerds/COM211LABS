#include "Square.h"
//implementation of the Square class

Shapes::Square::Square(double side){
    this->side = side;
}
Shapes::Square::Square(){
    side = 0;
}
Shapes::Square::~Square() {
    // Destructor
}

double Shapes::Square::sideLength() const {
    return side;
}
void Shapes::Square::setSideLength(double side) {
    this->side = side;  }
