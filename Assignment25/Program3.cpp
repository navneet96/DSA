//3. Write a function to sort an array of any size. (TSRS)
#include<bits/stdc++.h>
using namespace std;

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements = ";
    cin >> n;

    int* arr = new int[n];
    cout << "Enter elements = ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sortArray(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr; // Always deallocate dynamic memory
    return 0;
}
