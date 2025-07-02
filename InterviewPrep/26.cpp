//Program to Print Fibonacci Series up to N Terms
#include <iostream>
using namespace std;

void printFibonacci(int n) {
    int a = 0, b = 1, next;

    cout << "Fibonacci Series up to " << n << " terms:\n";

    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;

    printFibonacci(terms);

    return 0;
}
