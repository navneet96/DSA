//Find similarities between two arrays.
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

pair<int, int> findCommonAndUnionCount(const vector<int>& arr1, const vector<int>& arr2) {
    unordered_set<int> set1;
    unordered_set<int> set2;

    // Manually insert elements to avoid constructor issues
    for (int num : arr1) set1.insert(num);
    for (int num : arr2) set2.insert(num);

    // Count common elements
    int commonCount = 0;
    for (int num : set2) {
        if (set1.count(num)) {
            commonCount++;
        }
    }

    // Union of both sets
    unordered_set<int> unionSet = set1;
    for (int num : set2) {
        unionSet.insert(num);
    }

    int unionCount = unionSet.size();
    return {commonCount, unionCount};
}

int main() {
    vector<int> ARR1 = {1, 2, 3, 4, 5};
    vector<int> ARR2 = {2, 4, 6, 8};

    pair<int, int> result = findCommonAndUnionCount(ARR1, ARR2);
    cout << result.first << " " << result.second << endl; // Output: 2 7

    return 0;
}
