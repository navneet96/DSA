//Check Subset
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isSubset(vector<int> &arr1, vector<int> &arr2) {
    unordered_map<int, int> freq;

    // Count elements in arr1
    for (int num : arr1) {
        freq[num]++;
    }

    // Check each element in arr2
    for (int num : arr2) {
        if (freq[num] > 0) {
            freq[num]--; // Use one occurrence
        } else {
            return false; // Element missing or overused
        }
    }

    return true; // All elements of arr2 matched
}
int main() {
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {1,2};

    if (isSubset(arr1, arr2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
