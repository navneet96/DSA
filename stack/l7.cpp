// Valid Parentheses [{()}]

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValidParenthesis(string s) {
    stack<char> stk;
    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stk.push(ch);
        } else {
            if (stk.empty()) return false;

            char top = stk.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                stk.pop();
            } else {
                return false;
            }
        }
    }
    return stk.empty();
}
int main() {
    string s;
    cout << "Enter a string with parentheses: ";//[{()}]
    cin >> s;

    if (isValidParenthesis(s))
        cout << "Valid Parentheses\n";
    else
        cout << "Invalid Parentheses\n";

    return 0;
}
