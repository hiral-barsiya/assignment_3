/* Write a C++ Program to illustrates the use of Constructors in multilevel 
inheritance*/

#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    Animal() {
        cout << "Animal Constructor called" << endl;
    }
};

// Derived class
class Mammal : public Animal {
public:
    Mammal() {
        cout << "Mammal Constructor called" << endl;
    }
};

// Further derived class
class Dog : public Mammal {
public:
    Dog() {
        cout << "Dog Constructor called" << endl;
    }
};

int main() {
    Dog dog; // Create a Dog object
    return 0;
}
