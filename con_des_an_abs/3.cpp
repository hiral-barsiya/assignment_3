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
        // Constructor
        Car() {
            company = "";
            model = "";
            year = 0;
        }

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

    // Set car information
    car.setCompany("Toyota");
    car.setModel("Camry");
    car.setYear(2022);


    // Access information using getter methods
    cout << "\nCompany: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    return 0;
}

