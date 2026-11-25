#include "Circle.h"

Shapes::Circle::Circle(double radius) {
    this->radius = radius;
}
Shapes::Circle::Circle() {
    radius = 0.0;
}
Shapes::Circle::~Circle() {
    // Destructor
}
double Shapes::Circle::getRadius() const {
    return radius;
}
void Shapes::Circle::setRadius(double radius) {
    this->radius = radius;
}
