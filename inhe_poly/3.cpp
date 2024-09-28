/*Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance) */

#include <iostream>
#include <string>

using namespace std;

// Base class: Person
class Person {
    protected:
        string name;
        int age;

    public:
        // Constructor
        Person(string n, int a) {
            name = n;
            age = a;
        }

        // Input data
        void inputPerson() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter age: ";
            cin >> age;
        }

        // Display data
        void displayPerson() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

// Derived class: Student (multiple inheritance)
class Student : public Person {
    private:
        double percentage;

    public:
        // Constructor
        Student(string n, int a, double p) : Person(n, a) {
            percentage = p;
        }

        // Input data
        void inputStudent() {
            inputPerson();
            cout << "Enter percentage: ";
            cin >> percentage;
        }

        // Display data
        void displayStudent() {
            displayPerson();
            cout << "Percentage: " << percentage << endl;
        }
};

// Derived class: Teacher (multiple inheritance)
class Teacher : public Person {
    private:
        double salary;

    public:
        // Constructor
        Teacher(string n, int a, double s) : Person(n, a) {
            salary = s;
        }

        // Input data
        void inputTeacher() {
            inputPerson();
            cout << "Enter salary: ";
            cin >> salary;
        }

        // Display data
        void displayTeacher() {
            displayPerson();
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    // Student object
    Student student("hiral", 19, 90.0);
    cout << "Student Data:" << endl;
    student.displayStudent();

    // Input student data
    cout << "\nEnter new student data:" << endl;
    student.inputStudent();
    cout << "\nUpdated Student Data:" << endl;
    student.displayStudent();

    // Teacher object
    Teacher teacher("kruti kotak", 30, 50000.0);
    cout << "\n\nTeacher Data:" << endl;
    teacher.displayTeacher();

    // Input teacher data
    cout << "\nEnter new teacher data:" << endl;
    teacher.inputTeacher();
    cout << "\nUpdated Teacher Data:" << endl;
    teacher.displayTeacher();


    return 0;
}
