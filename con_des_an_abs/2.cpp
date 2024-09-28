/*Write a program of Addition, Subtraction, Division, Multiplication using 
constructor.*/

#include <iostream>

using namespace std;

class Calculator {
    private:
        double num1, num2;

    public:
        // Constructors initialize numbers
        Calculator(double n1, double n2) {
            num1 = n1;
            num2 = n2;
        }

        //  calculate addition
        double add() {
            return num1 + num2;
        }

        //  calculate subtraction
        double subtract() {
            return num1 - num2;
        }

        //  calculate multiplication
        double multiply() {
            return num1 * num2;
        }

        //  calculate division
        double divide() {
            return num1 / num2;
        }

        //  display results
        void displayResults() {
            cout << "Addition: " << add() << endl;
            cout << "Subtraction: " << subtract() << endl;
            cout << "Multiplication: " << multiply() << endl;
            cout << "Division: " << divide() << endl;
        }
};

int main() {
    double num1, num2;

    // Input numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Create Calculator object
    Calculator calc(num1, num2);

    // Display results
    calc.displayResults();

    return 0;
}


