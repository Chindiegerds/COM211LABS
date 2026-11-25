#pragma once

class Rectangle{
    private:
        int width;
        int length;

    public:
        Rectangle();
        Rectangle(int w, int l);

        float getWidth();
        float getLength();
        void setWidth(float w);
        void setLength(float l);
        float CalculateArea();
};