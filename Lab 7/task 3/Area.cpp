#include "Area.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

using namespace Shapes;
double Area::CalculateArea(const Square& square) {
    return square.sideLength() * square.sideLength();
}

double Area::CalculateArea(const Circle& circle) {
    return 3.14159 * circle.getRadius() * circle.getRadius();
}

double Area::CalculateArea(const Triangle& triangle) {
    return 0.5 * triangle.getBase() * triangle.getHeight();
}