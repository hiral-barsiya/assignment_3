/* Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance*/

#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
    protected:
        string name;
        int age;

    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }

        void displayPerson() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

// Derived class: Student (single inheritance)
class Student : public Person {
    protected:
        string course;

    public:
        Student(string n, int a, string c) : Person(n, a) {
            course = c;
        }

        void displayStudent() {
            displayPerson();
            cout << "Course: " << course << endl;
        }
};

// Derived class: Graduate (multilevel inheritance)
class Graduate : public Student {
    private:
        string specialization;

    public:
        Graduate(string n, int a, string c, string s) 
            : Student(n, a, c) {
            specialization = s;
        }

        void displayGraduate() {
            displayStudent();
            cout << "Specialization: " << specialization << endl;
        }
};

int main() {
    Graduate graduate("hiral", 19, "Bachelor of Computer Science", "Artificial Intelligence");
    cout << "\nGraduate details:" << endl;
    graduate.displayGraduate();

    return 0;
}
