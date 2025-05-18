//Maximum Frequency Number
#include<bits/stdc++.h>
using namespace std;
int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int> count;

    int maxFreq = 0;
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
        maxFreq = max(maxFreq, count[arr[i]]);
    }

    for (int i = 0; i < n; i++) {
        if (count[arr[i]] == maxFreq) {
            return arr[i]; // return first element with max frequency
        }
    }

    return -1; // in case of empty array (optional)
}
int main(){
    vector<int> arr = {0, -3, 1, 2, 4, -1, -2, 2, -3, -5};
    int result = maximumFrequency(arr, arr.size());
    cout << result << endl;

    return 0;
}

