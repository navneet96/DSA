//Write a program to cyclically rotate an array by one.
#include <iostream>
using namespace std;

void rotateByOne(int arr[], int n) {
    int last = arr[n - 1]; // Save the last element

    // Shift all elements one position to the right
    for (int i = n - 1; i > 0; --i) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last; // Move the last element to the first position
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    rotateByOne(arr, n);
    cout << "Rotated array: ";
    printArray(arr, n);

    return 0;
}

