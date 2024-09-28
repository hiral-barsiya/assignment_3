/*Write a C++ Program to find Area of Rectangle using inheritance */

#include <iostream>
using namespace std;

// Base class: Shape
class Shape {
    protected:
        string shapeName;

    public:
        // Constructor
        Shape(string sn) {
            shapeName = sn;
        }

        // Display shape name
        void displayShapeName() {
            cout << "Shape: " << shapeName << endl;
        }
};

// Derived class: Rectangle (inherits from Shape)
class Rectangle : public Shape {
    private:
        double length;
        double width;
        double area;

    public:
        // Constructor
        Rectangle(double l, double w) : Shape("Rectangle") {
            length = l;
            width = w;
            area = 0.0;
        }

        // Calculate area
        void calculateArea() {
            area = length * width;
        }

        // Display rectangle details
        void displayDetails() {
            displayShapeName();
            cout << "Length: " << length << endl;
            cout << "Width: " << width << endl;
            calculateArea();
            cout << "Area: " << area << endl;
        }
};

int main() {
    double length, width;

    cout << "Enter rectangle's length: ";
    cin >> length;
    cout << "Enter rectangle's width: ";
    cin >> width;

    Rectangle rect(length, width);
    rect.displayDetails();

    return 0;
}
