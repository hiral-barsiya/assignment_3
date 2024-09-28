/* Write a program to calculate the area of circle, rectangle and triangle 
using Function Overloading 
Rectangle: Area * breadth 
Triangle: ½ *Area* breadth 
Circle: Pi * Area *Area*/

#include <iostream>
using namespace std;

const double PI = 3.14159;

class Shape {
    public:
        // Function overloading for circle area
        double area(double radius) {
            return PI * radius * radius;
        }

        // Function overloading for rectangle area
        double area(double length, double breadth) {
            return length * breadth;
        }

        // Function overloading for triangle area
        double area(double base, double height) {
            return 0.5 * base * height;
        }
};

int main() {
    Shape shape;

    // Calculate circle area
    double radius = 5.0;
    cout << "Circle Area: " << shape.area(radius) << endl;

    // Calculate rectangle area
    double length = 4.0, breadth = 6.0;
    cout << "Rectangle Area: " << shape.area(length, breadth) << endl;

    // Calculate triangle area
    double base = 3.0, height = 7.0;
    cout << "Triangle Area: " << shape.area(base, height) << endl;

    return 0;
}
