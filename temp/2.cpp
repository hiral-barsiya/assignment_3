/* Write a program of to sort the array using template */

#include <iostream>
using namespace std;

// Template function to sort an array
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                // Swap the elements
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Function to print the array
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before sorting: ";
    printArray(arr, size);

    // Sorting the array
    sortArray(arr, size);

    cout << "Array after sorting: ";
    printArray(arr, size);

    return 0;
}
