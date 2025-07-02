/*
Find the first non-repeating character
Input: "aabbcd"
Output: 'c'
*/

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int freq[256] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) {
            cout << "First non-repeating character: " << str[i] << endl;
            return 0;
        }
    }

    cout << "No non-repeating character found.\n";
    return 0;
}


