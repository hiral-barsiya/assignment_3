/*Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading */

#include <iostream>
using namespace std;

// Function to add two integers
int operate(int a, int b) {
    return a + b;
}

// Function to subtract two integers
int operate(int a, int b, char op) {
    return a - b;
}

// Function to multiply two integers
double operate(double a, double b) {
    return a * b;
}

// Function to divide two integers
double operate(double a, double b, char op) {
    return a / b;
}

int main() {
    int num1, num2;
    double num3, num4;
    char operation;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Enter two floating-point numbers: ";
    cin >> num3 >> num4;

    cout << "Addition of two integers: " << operate(num1, num2) << endl;
    cout << "Subtraction of two integers: " << operate(num1, num2, '-') << endl;
    cout << "Multiplication of two numbers: " << operate(num3, num4) << endl;
    cout << "Division of two numbers: " << operate(num3, num4, '/') << endl;

    return 0;
}
