/* Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor */

#include <iostream>
#include <string>

using namespace std;

class Employee {
    private:
        string name;
        int employeeID;
        double salary;

    public:
        // Constructor
        Employee(string n, int id) {
            name = n;
            employeeID = id;
            salary = 0.0;
        }

        // Calculate salary based on performance rating (1-5)
        //perRat=performance rating
        void calculateSalary(int perRat) {
            if (perRat == 5)
                salary = 50000.0;
            else if (perRat == 4)
                salary = 40000.0;
            else if (perRat == 3)
                salary = 30000.0;
            else if (perRat == 2)
                salary = 20000.0;
            else if (perRat == 1)
                salary = 10000.0;
            else
                cout << "Invalid performance rating." << endl;
        }

        // Display employee information
        void displayInfo() {
            cout << "Employee Information:" << endl;
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << employeeID << endl;
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    // Input employee information
    string name;
    int id;
    int perRat;

    cout << "Enter employee name: ";
    cin >> name;
    cout << "Enter employee ID: ";
    cin >> id;
    cout << "Enter performance rating (1-5): ";
    cin >> perRat;

    // Create Employee object
    Employee emp(name, id);

    // Calculate salary
    emp.calculateSalary(perRat);

    // Display employee information
    emp.displayInfo();

    return 0;
}
