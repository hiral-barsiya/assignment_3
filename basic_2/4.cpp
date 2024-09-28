/**  Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference. */

#include <iostream>

using namespace std;

class Circle {
private:
    double radius; 

public:
    
    void setRadius(double r) {
        radius = r; 
    }

    
    double area() {
        return 3.14 * radius * radius; 
    }


    double circumference() {
        return 2 * 3.14 * radius;
    }
};

int main() {
    double r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle circle;
    
    circle.setRadius(r);

    cout << "Area of the circle: " << circle.area() << endl;
    cout << "Circumference of the circle: " << circle.circumference() << endl;

    return 0;
}
