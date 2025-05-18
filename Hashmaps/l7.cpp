//Second Most Repeated Word
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

string secondMostRepeated(vector<string>& arr) {
    unordered_map<string, int> freq;

    // Count frequency of each word
    for (const string& word : arr) {
        freq[word]++;
    }

    // Convert map to vector of pairs (word, frequency)
    vector<pair<string, int>> freqVec(freq.begin(), freq.end());

    // Sort by frequency in descending order
    // Custom sort: by frequency desc, then alphabetically
    sort(freqVec.begin(), freqVec.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        if (a.second == b.second)
            return a.first < b.first;
        return a.second > b.second;  // descending order
    });

    // If less than 2 unique words, return empty
    if (freqVec.size() < 2) return "";

    return freqVec[1].first;  // second most frequent word
}

int main() {
    vector<string> arr = {"aaa", "bbb", "ccc", "aaa", "bbb", "aaa"};
    cout << secondMostRepeated(arr) << endl;  // Output: bbb
    return 0;
}
