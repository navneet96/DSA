//Implementation of Stack using LinkedList
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Stack class using linked list
class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    // Push operation
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;
        cout << x << " pushed into stack\n";
    }

    // Pop operation
    void pop() {
        if (top == nullptr) {
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        cout << temp->data << " popped from stack\n";
        top = top->next;
        delete temp;
    }

    // Peek (top element)
    int peek() {
        if (top == nullptr) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }

    // Display stack
    void display() {
        if (top == nullptr) {
            cout << "Stack is empty\n";
            return;
        }
        Node* temp = top;
        cout << "Stack elements (top to bottom): ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Destructor to clean memory
    ~Stack() {
        while (top != nullptr)
            pop();
    }
};

// Driver code
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.pop();
    cout << "Top element is " << s.peek() << endl;
    s.display();

    return 0;
}
