//Implementation of Stack using Linked List

#include<iostream>
using namespace std;

// Node structure for linked list
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Queue class using linked list
class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }

    // Add element to the rear of the queue
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (rear == nullptr) { // Queue is empty
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    // Remove element from the front of the queue
    int dequeue() {
        if (isEmpty()) {
            return -1; // Queue underflow
        }

        int result = front->data;
        Node* temp = front;
        front = front->next;

        // If the queue becomes empty
        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;
        return result;
    }

    // Get the front element
    int getFront() {
        if (isEmpty()) {
            return -1;
        }
        return front->data;
    }
};
int main() {
    Queue q;

    // Enqueue elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Show front element
    cout << "Front element: " << q.getFront() << endl;

    // Dequeue elements
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    // Show front after dequeues
    cout << "Front element now: " << q.getFront() << endl;

    // Dequeue remaining
    cout << "Dequeued: " << q.dequeue() << endl;

    // Try to dequeue from empty queue
    cout << "Dequeued from empty queue: " << q.dequeue() << endl;

    // Check if queue is empty
    if (q.isEmpty()) {
        cout << "Queue is empty now." << endl;
    } else {
        cout << "Queue is not empty." << endl;
    }

    return 0;
}
