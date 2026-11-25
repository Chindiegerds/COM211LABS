#include "Rectangle.h"

Rectangle::Rectangle(){
    width = 0;
    length = 0;
}
Rectangle::Rectangle(int w, int l){
    width = w;
    length = l;
}
float Rectangle::getWidth(){
    return width;
}
float Rectangle::getLength(){
    return length;
}
void Rectangle::setWidth(float w){
    width = w;
}
void Rectangle::setLength(float l){
    length = l;
}
float Rectangle::CalculateArea(){
    return width * length;
}