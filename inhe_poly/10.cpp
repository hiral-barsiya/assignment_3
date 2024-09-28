/*.Write a program to concatenate the two strings using Operator Overloading */

#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];

public:
    // Constructor to initialize the string
    String() {
        str[0] = '\0';
    }

    // Function to input the string
    void input() {
        cout << "Enter a string: ";
        cin >> str;
    }

    // Overloading the + operator to concatenate two strings
    String operator+(const String &s) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }

    // Function to display the string
    void display() {
        cout << str << endl;
    }
};

int main() {
    String str1, str2, str3;

    cout << "Enter first string:" << endl;
    str1.input();

    cout << "Enter second string:" << endl;
    str2.input();

    // Concatenating two strings using overloaded + operator
    str3 = str1 + str2;

    cout << "Concatenated string: ";
    str3.display();

    return 0;
}
