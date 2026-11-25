#pragma once

namespace Shapes{
    class Square{
        
        public:
            Square();
            Square(double side);\
            ~Square();

            double sideLength() const;
            void setSideLength(double side);
            
        private:
            double side;
    };
}