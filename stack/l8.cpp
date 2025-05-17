// Insert An Element At Its Bottom In A Given Stack

#include <bits/stdc++.h>
using namespace std;

// Helper function to recursively push at bottom
void solve(stack<int>& s, int x) {
    // Base case: if stack is empty, push the element
    if (s.empty()) {
        s.push(x);
        return;
    }

    // Hold the top and pop it
    int num = s.top();
    s.pop();

    // Recursive call
    solve(s, x);

    // Push back the held element
    s.push(num);
}

// Main function to call the helper
stack<int> pushAtBottom(stack<int>& myStack, int x) {
    solve(myStack, x);
    return myStack;
}
int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);  // Stack top -> 3 2 1

    int x = 10;  // Element to push at bottom

    s = pushAtBottom(s, x);  // Result: top -> 3 2 1 0

    // Display stack
    cout << "Stack from top to bottom: ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
