//Reverse Stack Using Recursion
#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &stack, int element) {
    if (stack.empty()) {
        stack.push(element);
        return;
    }

    int num = stack.top();
    stack.pop();
    insertAtBottom(stack, element);
    stack.push(num);
}

void reverseStack(stack<int> &stack) {
    if (stack.empty()) {
        return;
    }

    int num = stack.top();
    stack.pop();

    reverseStack(stack);
    insertAtBottom(stack, num);
}

int main() {
    stack<int> s;

    // Push elements
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);  // Top -> 4 3 2 1

    cout << "Original Stack (top to bottom): ";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    // Reverse the stack
    reverseStack(s);

    // Print reversed stack
    cout << "Reversed Stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
