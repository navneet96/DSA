//Sort a Stack
/*
Note :
1) Use of any loop constructs like while, for..etc is not allowed. 
2) The stack may contain duplicate integers.
3) The stack may contain any integer i.e it may either be negative, positive or zero.
*/

#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &stack, int num) {
    if (stack.empty() || stack.top() < num) {
        stack.push(num);
        return;
    }

    int n = stack.top();
    stack.pop();
    sortedInsert(stack, num);
    stack.push(n);
}

void sortStack(stack<int> &stack) {
    if (stack.empty()) return;

    int num = stack.top();
    stack.pop();

    sortStack(stack);
    sortedInsert(stack, num);
}

int main() {
    stack<int> s;
    s.push(30);
    s.push(-5);
    s.push(18);
    s.push(14);
    s.push(-3);

    cout << "Original Stack (top to bottom): ";
    stack<int> temp = s;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;

    sortStack(s);

    cout << "Sorted Stack (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
