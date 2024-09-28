/*Write a C++ Program display Student Mark sheet using Multiple inheritance */

#include <iostream>
#include <string>

using namespace std;

// Base class: Student
class Student {
protected:
    string name;
    int rollNumber;

public:
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }

    void inputStudent() {
        cout << "Enter student's name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }

    void displayStudent() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Base class: Marks
class Marks {
protected:
    double english;
    double math;
    double science;

public:
    Marks(double e, double m, double s) {
        english = e;
        math = m;
        science = s;
    }

    void inputMarks() {
        cout << "Enter English marks: ";
        cin >> english;
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter Science marks: ";
        cin >> science;
    }

    void displayMarks() {
        cout << "English: " << english << endl;
        cout << "Math: " << math << endl;
        cout << "Science: " << science << endl;
    }

    double calculateTotal() {
        return english + math + science;
    }
};

// Derived class: MarkSheet (multiple inheritance)
class MarkSheet : public Student, public Marks {
private:
    double total;

public:
    MarkSheet(string n, int r, double e, double m, double s) 
        : Student(n, r), Marks(e, m, s) {
        total = 0.0;
    }

    void inputMarkSheet() {
        inputStudent();
        inputMarks();
    }

    void displayMarkSheet() {
        displayStudent();
        displayMarks();
        total = calculateTotal();
        cout << "Total: " << total << endl;
    }
};

int main() {
    MarkSheet markSheet("hiral", 1, 90, 85, 95);
    cout << "Mark Sheet:" << endl;
    markSheet.displayMarkSheet();

    cout << "\nEnter new mark sheet data:" << endl;
    MarkSheet newMarkSheet("", 0, 0, 0, 0);
    newMarkSheet.inputMarkSheet();
    cout << "\nUpdated Mark Sheet:" << endl;
    newMarkSheet.displayMarkSheet();

    return 0;
}
