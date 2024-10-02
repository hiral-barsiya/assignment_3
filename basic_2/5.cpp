/*Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.*/


#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle(double l = 0.0, double w = 0.0) {
        length = l;
        width = w;
    }

    // Calculate area
    double calculateArea() {
        return length * width;
    }

    // Calculate perimeter
    double calculatePerimeter() {
        return 2 * (length + width);
    }

    // Display information
    void displayInfo() {
        cout << "Rectangle Dimensions:-" << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    double length, width;

    cout << "Enter rectangle length: ";
    cin >> length;
    cout << "Enter rectangle width: ";
    cin >> width;

    // Create Rectangle object
    Rectangle rect(length, width);

    // Display rectangle information
    rect.displayInfo();

    return 0;
}

