/*Write a function to rotate an array by n position in d direction.
The d is an indicative value for left or right.
(For example, if array of size 5 is [32, 29, 40, 12, 70]; 
n is 2 and d is left, then the resulting array after
left rotation 2 times is [40, 12, 70, 32, 29] )
*/

#include <iostream>
using namespace std;

void leftRotateByOne(int* arr, int size) {
    int temp = arr[0];
    for (int i = 0; i < size - 1; ++i)
        arr[i] = arr[i + 1];
    arr[size - 1] = temp;
}

void rightRotateByOne(int* arr, int size) {
    int temp = arr[size - 1];
    for (int i = size - 1; i > 0; --i)
        arr[i] = arr[i - 1];
    arr[0] = temp;
}

void rotateArray(int* arr, int size, int positions, const string& direction) {
    positions %= size;  // Handle positions > size

    if (direction == "left") {
        for (int i = 0; i < positions; ++i)
            leftRotateByOne(arr, size);
    } else if (direction == "right") {
        for (int i = 0; i < positions; ++i)
            rightRotateByOne(arr, size);
    } else {
        cout << "Invalid direction! Use 'left' or 'right'.\n";
    }
}

int main() {
    int size, positions;
    string direction;

    cout << "Enter the number of elements = ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    cout << "Enter number of positions to rotate: ";
    cin >> positions;

    cout << "Enter direction (left/right): ";
    cin >> direction;

    rotateArray(arr, size, positions, direction);

    cout << "Rotated Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;
    return 0;
}
