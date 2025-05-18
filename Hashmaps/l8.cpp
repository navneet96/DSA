//Majority element
#include <bits/stdc++.h>
using namespace std;
int findMajorityElement(int arr[], int n) {
	unordered_map<int, int> freq;

    // Count frequency of each element
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Check for majority element
    for (auto it : freq) {
        if (it.second > n / 2) {
            return it.first;
        }
    }

    return -1;  // No majority element
}
int main() {
    int arr[] = {2, 2, 1, 2, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << findMajorityElement(arr, n) << endl;  // Output: 2

    return 0;
}
