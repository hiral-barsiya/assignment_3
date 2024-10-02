/*Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables. */

#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    

    // Setter methods
    void setCompany(string c) {
        company = c;
    }

    void setModel(string m) {
        model = m;
    }

    void setYear(int y) {
        year = y;
    }

    // Getter methods
    string getCompany() {
        return company;
    }

    string getModel() {
        return model;
    }

    int getYear() {
        return year;
    }
};

int main() {
    Car car;
    string company, model;
    int year;

    // Input car information from user
    cout << "Enter car company: ";
    cin>> company;
    cout << "Enter car model: ";
    cin>> model;
    cout << "Enter car year: ";
    cin >> year;

    // Set car information
    car.setCompany(company);
    car.setModel(model);
    car.setYear(year);

    // Access information using getter methods
    cout << "\nCar Information:" << endl;
    cout << "Company: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    return 0;
}
