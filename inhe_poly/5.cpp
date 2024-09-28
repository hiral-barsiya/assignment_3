/*Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance)*/

#include <iostream>
using namespace std;

// Base class: Student
class Student {
    protected:
        int rollNumber;

    public:
        Student(int r) {
            rollNumber = r;
        }

        void inputStudent() {
            cout << "Enter roll number: ";
            cin >> rollNumber;
        }

        void displayStudent() {
            cout << "Roll Number: " << rollNumber << endl;
        }
};

// Derived class: Test (single inheritance)
class Test : public Student {
    protected:
        double math;
        double science;

    public:
        Test(int r, double m, double s) : Student(r) {
            math = m;
            science = s;
        }

        void inputTest() {
            inputStudent();
            cout << "Enter Math marks: ";
            cin >> math;
            cout << "Enter Science marks: ";
            cin >> science;
        }

        void displayTest() {
            displayStudent();
            cout << "Math: " << math << endl;
            cout << "Science: " << science << endl;
        }

        double calculateTotal() {
            return math + science;
        }
};

// Derived class: Result (multilevel inheritance)
class Result : public Test {
    private:
        double total;

    public:
        Result(int r, double m, double s) : Test(r, m, s) {
            total = 0.0;
        }

        void inputResult() {
            inputTest();
        }

        void displayResult() {
            displayTest();
            total = calculateTotal();
            cout << "Total: " << total << endl;
        }
};

int main() {
    Result result(1, 90, 95);
    cout << "Result:" << endl;
    result.displayResult();

    cout << "\nEnter new result data:" << endl;
    Result newResult(0, 0, 0);
    newResult.inputResult();
    cout << "\nUpdated Result:" << endl;
    newResult.displayResult();

    return 0;
}
