//Move Constructor, Copy Assignment, L-value vs R-value
#include <iostream>
using namespace std;

class Number {
private:
    int* data;

public:
    // Default constructor
    Number() {
        data = new int(0);
        cout << "Default Constructor\n";
    }

    // Parameterized constructor
    Number(int value) {
        data = new int(value);
        cout << "Parameterized Constructor: " << *data << endl;
    }

    // Copy constructor (l-value)
    Number(const Number& other) {
        data = new int(*other.data);
        cout << "Copy Constructor: " << *data << endl;
    }

    // Move constructor (r-value)
    Number(Number&& other) noexcept {
        data = other.data;
        other.data = nullptr;
        cout << "Move Constructor\n";
    }

    // Copy assignment operator
    Number& operator=(const Number& other) {
        cout << "Copy Assignment\n";
        if (this != &other) {
            delete data;
            data = new int(*other.data);
        }
        return *this;
    }

    // Move assignment operator
    Number& operator=(Number&& other) noexcept {
        cout << "Move Assignment\n";
        if (this != &other) {
            delete data;
            data = other.data;
            other.data = nullptr;
        }
        return *this;
    }

    void show() const {
        if (data)
            cout << "Value: " << *data << endl;
        else
            cout << "Value: nullptr" << endl;
    }

    ~Number() {
        cout << "Destructor for ";
        if (data)
            cout << *data << endl;
        else
            cout << "nullptr" << endl;
        delete data;
    }
};

int main() {
    Number a(10);        // Parameterized constructor
    Number b = a;        // Copy constructor (L-value)
    
    Number c;
    c = a;               // Copy assignment (L-value)

    Number d = move(Number(50)); // Move constructor (R-value)

    Number e;
    e = Number(100);     // Move assignment (R-value)

    return 0;
}
