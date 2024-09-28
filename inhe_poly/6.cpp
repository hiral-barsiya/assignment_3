/* Write a C++ Program to show access to Private Public and Protected using 
Inheritance */

#include <iostream>
using namespace std;

// Base class: Person
class Person {
    private:
        string privateVar = "Private variable";

    protected:
        string protectedVar = "Protected variable";

    public:
        string publicVar = "Public variable";

        void displayPerson() {
            cout << "Private: " << privateVar << endl;
            cout << "Protected: " << protectedVar << endl;
            cout << "Public: " << publicVar << endl;
        }
};

// Derived class: Employee (public inheritance)
class Employee : public Person {
    public:
        void displayEmployee() {
            // Accessing protected and public variables
            cout << "From Employee:" << endl;
            cout << "Protected: " << protectedVar << endl;
            cout << "Public: " << publicVar << endl;

            // Error: Cannot access private variable
            // cout << "Private: " << privateVar << endl;
        }
};

int main() {
    Person person;
    cout << "Person object:" << endl;
    person.displayPerson();

    Employee employee;
    cout << "\nEmployee object:" << endl;
    employee.displayPerson();
    employee.displayEmployee();

    // Direct access to public variable
    cout << "\nPublic variable: " << employee.publicVar << endl;

    // Error: Cannot access protected variable directly
    // cout << "Protected variable: " << employee.protectedVar << endl;

    // Error: Cannot access private variable directly
    // cout << "Private variable: " << employee.privateVar << endl;

    return 0;
}
