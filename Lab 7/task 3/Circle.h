#pragma once

namespace Shapes {
    class Circle{
        private:
            double radius;

        public:
            Circle(double radius);
            Circle();
            ~Circle();
            double getRadius() const;
            void setRadius(double radius);
    };
}