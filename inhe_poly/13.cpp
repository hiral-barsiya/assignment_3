/* Write a program to find the max number from given two numbers 
using friend function*/

#include <iostream>
using namespace std;

class MaxFinder {
    private:
        int num1, num2;

    public:
        // Constructor
        MaxFinder(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        // Friend function to find maximum
        friend int findMax(MaxFinder&);

        // Display numbers
        void display() {
            cout << "Num1: " << num1 << endl;
            cout << "Num2: " << num2 << endl;
        }
};

// Friend function to find maximum
int findMax(MaxFinder& obj) {
    return (obj.num1 > obj.num2) ? obj.num1 : obj.num2;
}

int main() {
    MaxFinder maxFinder(10, 20);

    cout << "Given numbers:" << endl;
    maxFinder.display();

    int maxNum = findMax(maxFinder);

    cout << "\nMaximum number: " << maxNum << endl;

    return 0;
}
