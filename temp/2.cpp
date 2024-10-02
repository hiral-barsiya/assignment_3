/* Write a program of to sort the array using template */

#include <iostream>
using namespace std;

template <typename T>
void sort(T arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                T temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int n) {
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout<< "enter number of element:";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, n);
    printArray(arr, n);

    return 0;
}

