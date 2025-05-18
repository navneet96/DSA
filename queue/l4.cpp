//Implementation of circular Queue
#include<iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int front;
    int rear;
    int size;

public:
    // Constructor
    CircularQueue(int n) {
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueue operation
    bool enqueue(int value) {
        // Check if the queue is full
        if ((front == 0 && rear == size - 1) || 
            (rear + 1) % size == front) {
            return false;
        }

        // First element insertion
        if (front == -1) {
            front = rear = 0;
        }
        else if (rear == size - 1 && front != 0) {
            rear = 0; // wrap around
        }
        else {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
        return true;
    }

    // Dequeue operation
    int dequeue() {
        if (front == -1) {
            return -1; // queue is empty
        }

        int result = arr[front];
        arr[front] = -1;

        // Queue has only one element
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }

        return result;
    }

    // Optional: peek front
    int peek() {
        if (front == -1) return -1;
        return arr[front];
    }

    // Optional: check if empty
    bool isEmpty() {
        return front == -1;
    }

    // Optional: check if full
    bool isFull() {
        return ((rear + 1) % size == front);
    }
};
int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);  // should fail, queue full

    cout << "Dequeued: " << q.dequeue() << endl; // 10
    cout << "Dequeued: " << q.dequeue() << endl; // 20

    q.enqueue(60);
    q.enqueue(70);  // should work due to circular nature

    while (!q.isEmpty()) {
        cout << "Dequeued: " << q.dequeue() << endl;
    }

    return 0;
}
