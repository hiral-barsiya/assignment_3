/*. Write a program to swap the two numbers using friend function 
without using third variable */

#include <iostream>
using namespace std;

class Swap {
    private:
        int num1, num2;

    public:
        // Constructor
        Swap(int n1, int n2) {
            num1 = n1;
            num2 = n2;
        }

        // Friend function to swap numbers
        friend void swapNumbers(Swap&);

        // Display numbers
        void display() {
            cout << "Num1: " << num1 << endl;
            cout << "Num2: " << num2 << endl;
        }
};

// Friend function to swap numbers
void swapNumbers(Swap& obj) {
    obj.num1 = obj.num1 + obj.num2;
    obj.num2 = obj.num1 - obj.num2;
    obj.num1 = obj.num1 - obj.num2;
}

int main() {
    Swap swapObj(10, 20);

    cout << "Before swapping:" << endl;
    swapObj.display();

    swapNumbers(swapObj);

    cout << "\nAfter swapping:" << endl;
    swapObj.display();

    return 0;
}
