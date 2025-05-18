//Roman Numeral To Integer
#include <iostream>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int total = 0;

    for (int i = 0; i < s.length(); i++) {
        // If current value is less than the next value, subtract it
        if (i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]]) {
            total -= roman[s[i]];
        } else {
            total += roman[s[i]];
        }
    }

    return total;
}
int main() {
    string s = "XII";//"MCMXCIV";  // 1000 + (1000 - 100) + (100 - 10) + (5 - 1) = 1994
    cout << romanToInt(s) << endl;  // Output: 1994
    return 0;
}
