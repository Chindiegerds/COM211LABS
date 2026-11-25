#pragma once
namespace Shapes{
    class Triangle{
        
        public:
            Triangle();
            Triangle(double base, double height);
            ~Triangle();
            double getBase() const;
            double getHeight() const;
            void setBase(double base);
            void setHeight(double height);

        private:
            double base;
            double height;
    };
}