// Redundant Brackets
#include <bits/stdc++.h>
using namespace std;

bool findRedundantBrackets(string &s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if (ch == ')') {
            bool isRedundant = true;

            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    isRedundant = false;
                }
                st.pop();
            }

            // Now top must be '('
            if (!st.empty()) {
                st.pop(); // Pop the '('
            }

            if (isRedundant) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    string expr = "((a+b))";  // Redundant
    cout << (findRedundantBrackets(expr) ? "Yes" : "No") << endl;

    expr = "(a+(b*c))";       // Not redundant
    cout << (findRedundantBrackets(expr) ? "Yes" : "No") << endl;

    return 0;
}
