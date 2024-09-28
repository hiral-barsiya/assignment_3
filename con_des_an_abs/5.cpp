/*Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include <iostream>

using namespace std;

class Triangle {
    private:
        double side1, side2, side3;

    public:
        // Constructor
        Triangle(double s1 = 0.0, double s2 = 0.0, double s3 = 0.0) {
            side1 = s1;
            side2 = s2;
            side3 = s3;
        }

        // Initialize triangle sides
        void initSides(double s1, double s2, double s3) {
            side1 = s1;
            side2 = s2;
            side3 = s3;
        }

    
        // Determine triangle type
        void triangleType() {
            if (!(side1 + side2 > side3) && (side2 + side3 > side1) && (side1 + side3 > side2)){
                cout << "Invalid triangle." << endl;
            }
            else if (side1 == side2 && side2 == side3){
                cout << "Equilateral triangle." << endl;
            }
            else if (side1 == side2 || side2 == side3 || side1 == side3){
                cout << "Isosceles triangle." << endl;
            }
            else{
                cout << "Scalene triangle." << endl;
            }
        }

        // Display triangle sides
        void displaySides() {
            cout << "Triangle Sides:" << endl;
            cout << "Side 1: " << side1 << endl;
            cout << "Side 2: " << side2 << endl;
            cout << "Side 3: " << side3 << endl;
        }
};

int main() {
    Triangle triangle;
    triangle.initSides(5.0, 5.0, 5.0);

    // Display triangle sides
    triangle.displaySides();

    // Determine triangle type
    triangle.triangleType();

    return 0;
}
