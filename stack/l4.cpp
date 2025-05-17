//Two stack in an array

#include <iostream>
using namespace std;

class TwoStack {
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Initialize TwoStack.
    TwoStack(int s) {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }

    // Push in stack 1.
    void push1(int num) {
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        } else {
            cout << "Stack Overflow in Stack 1\n";
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
        } else {
            cout << "Stack Overflow in Stack 2\n";
        }
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if (top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        } else {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if (top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        } else {
            return -1;
        }
    }

    ~TwoStack() {
        delete[] arr;
    }
};


int main() {
    TwoStack ts(5);
    ts.push1(1);
    ts.push2(10);
    ts.push1(2);
    ts.push2(20);

    cout << ts.pop1() << endl; // 2
    cout << ts.pop2() << endl; // 20
    cout << ts.pop1() << endl; // 1
    cout << ts.pop2() << endl; // 10
    cout << ts.pop1() << endl; // -1 (empty)
}
