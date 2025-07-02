//Find Intersection of Two Arrays (without STL)
//Input: [1, 2, 3] & [2, 3, 4] → Output: [2, 3]

#include <iostream>
using namespace std;

int main() {
    int n1, n2;

    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    cout << "Intersection: ";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";

                // Mark arr2[j] as visited so it won't be reused
                arr2[j] = -1e9; // Use a sentinel value that can't be in array
                break;
            }
        }
    }

    return 0;
}
