/*Write a Program of Two 1D Matrix Addition using Operator Overloading*/

#include <iostream>
using namespace std;

class Matrix {
    int arr[5]; // Array to hold 5 elements

public:
    // Function to input elements of the matrix
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    // Overloading the + operator to add two matrices
    Matrix operator+(const Matrix &m) {
        Matrix temp;
        for (int i = 0; i < 5; i++) {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }

    // Function to display the matrix
    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;

    cout << "Enter elements for first matrix:" << endl;
    m1.input();

    cout << "Enter elements for second matrix:" << endl;
    m2.input();

    // Adding two matrices using overloaded + operator
    m3 = m1 + m2;

    cout << "Resultant matrix after addition:" << endl;
    m3.display();

    return 0;
}

