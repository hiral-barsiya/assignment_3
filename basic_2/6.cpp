/*Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.*/ 


#include <iostream>
#include <string>

using namespace std;

class Person {
    private:
        string name;
        int age;
        string country;

    public:
        // Constructor
        Person() {
            name = "";
            age = 0;
            country = "";
        }

        // Set values
        void setName(string n) {
            name = n;
        }

        void setAge(int a) {
            age = a;
        }

        void setCountry(string c) {
            country = c;
        }

        // Get values
        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        string getCountry() {
            return country;
        }

        // Display person information
        void displayInfo() {
            cout << "Person Information:" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Country: " << country << endl;
        }
};

int main() {
    Person person;
    
    person.setName("John Doe");
    person.setAge(30);
    person.setCountry("USA");
    
    person.displayInfo();
    

    return 0;
}


