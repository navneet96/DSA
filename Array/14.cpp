//Find First Repeating Element
//Input: [5, 3, 4, 3, 5] → Output: 3

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << "First Repeating Element: " << arr[i] << endl;
                return 0;
            }
        }
    }

    cout << "No repeating elements found." << endl;
    return 0;
}
