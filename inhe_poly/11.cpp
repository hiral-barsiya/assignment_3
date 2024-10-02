/* Write a program to calculate the area of circle, rectangle and triangle 
using Function Overloading 
Rectangle: Area * breadth 
Triangle: ½ *Area* breadth 
Circle: Pi * Area *Area*/

#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double area(double radius) {
     double PI = 3.14159;
    return PI * radius * radius;
}

// Function to calculate the area of a rectangle
double area(double length, double breadth) {
    return length * breadth;
}

// Function to calculate the area of a triangle
double area(double base, double height, bool isTriangle) {
    return 0.5 * base * height;
}

int main() {
    double radius, length, breadth, base, height;

    // Calculate area of circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << area(radius) << endl;

    // Calculate area of rectangle
    cout << "Enter the length and breadth of the rectangle: ";
    cin >> length >> breadth;
    cout << "Area of the rectangle: " << area(length, breadth) << endl;

    // Calculate area of triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << area(base, height, true) << endl;

    return 0;
}
