/* Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation*/

#include <iostream>
#include <string>

using namespace std;

// Address class
class Address {
    public:
        string street;
        string city;
        string state;
        int pincode;

        // Constructor
        Address(string s, string c, string st, int p) {
            street = s;
            city = c;
            state = st;
            pincode = p;
        }

        // Display address
        void displayAddress() {
            cout << "Address: " << street << ", " << city << ", " << state << " - " << pincode << endl;
        }
};

// Student class
class Student {
    private:
        string name;
        string className;
        int rollNumber;
        double marks;
        Address address;

    public:
        // Constructor
        Student(string n, string c, int r, double m, string s, string ct, string st, int p) 
            : address(s, ct, st, p) {
            name = n;
            className = c;
            rollNumber = r;
            marks = m;
        }

        // Calculate grade
        string calculateGrade() {
            if (marks >= 90)
                return "A";
            else if (marks >= 80)
                return "B";
            else if (marks >= 70)
                return "C";
            else if (marks >= 60)
                return "D";
            else
                return "F";
        }

        // Display student information
        void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "Class: " << className << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Marks: " << marks << endl;
            cout << "Grade: " << calculateGrade() << endl;
            address.displayAddress();
        }
};

int main() {
    // Input student information
    string name, className, street, city, state;
    int rollNumber, pincode;
    double marks;

    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter class: ";
    cin >> className;
    cout << "Enter roll number: ";
    cin >> rollNumber;
    cout << "Enter marks: ";
    cin >> marks;

    cout << "Enter street: ";
    cin >> street;
    cout << "Enter city: ";
    cin >> city;
    cout << "Enter state: ";
    cin >> state;
    cout << "Enter pincode: ";
    cin >> pincode;

    // Create Student object
    Student student(name, className, rollNumber, marks, street, city, state, pincode);

    // Display student information
    student.displayInfo();

    return 0;
}
