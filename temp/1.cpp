/*Write a program of to swap the two values using template */

#include <iostream>
using namespace std;

// Template function to swap values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int n1 = 10, n2 = 20;
    
    cout << "Before swapping integers: " << n1 << " " << n2 << endl;
    swapValues(n1, n2);
    cout << "After swapping integers: " << n1 << " " << n2 << endl;

    

    return 0;
}

