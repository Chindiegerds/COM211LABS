#pragma once
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"

using namespace Shapes;

class Area{

public:
    static double CalculateArea(const Square& square);
    static double CalculateArea(const Circle& circle);
    static double CalculateArea(const Triangle& triangle);

};