#include "Triangle.h"

// Implementation of the Triangle class
Shapes::Triangle::Triangle(double base, double height){
    this->base = base;
    this->height = height;
}
Shapes::Triangle::Triangle(){
    base = 0.0;
    height = 0.0;
}
Shapes::Triangle::~Triangle() {
    // Destructor implementation (if needed)
}
void Shapes::Triangle::setBase(double base) {
    this->base = base;
}
void Shapes::Triangle::setHeight(double height) {
    this->height = height;
}
double Shapes::Triangle::getBase() const {
    return base;
}
double Shapes::Triangle::getHeight() const {
    return height;
}