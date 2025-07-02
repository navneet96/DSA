
// Function to compute the minimum cost to balance the string

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int findMinimumCost(string str) {
    int n = str.length();

    // If length is odd, it can't be balanced
    if (n % 2 != 0) {
        return -1;
    }

    stack<char> st;

    for (char ch : str) {
        if (ch == '{') {
            st.push(ch);
        } else { // ch == '}'
            if (!st.empty() && st.top() == '{') {
                st.pop(); // Valid pair
            } else {
                st.push(ch); // Unmatched }
            }
        }
    }

    // Stack now contains only unbalanced brackets
    int open = 0, close = 0;

    while (!st.empty()) {
        if (st.top() == '{') open++;
        else close++;
        st.pop();
    }

    // Each two unbalanced brackets need 1 operation
    return (open + 1) / 2 + (close + 1) / 2;
}


int main() {
    string str = "{{}}}}";
    cout << "Minimum cost: " << findMinimumCost(str) << endl;
    return 0;
}
