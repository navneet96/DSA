//Implementation of Stack using Array
#include<iostream>
using namespace std;

class Queue {
    int* arr;
    int front;
    int rear;
    int size;

public:
    Queue() {
        size = 100001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool isEmpty() {
        return front == rear;
    }

    void enqueue(int data) {
        if (rear == size)
            cout << "Queue is full" << endl;
        else {
            arr[rear] = data;
            rear++;
        }
    }

    int dequeue() {
        if (front == rear)
            return -1;
        else {
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if (front == rear) {
                front = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int getFront() {
        if (front == rear)
            return -1;
        else
            return arr[front];
    }
};
int main() {
    Queue q;

    // Enqueue some elements
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    // Display front element
    cout << "Front element: " << q.getFront() << endl;

    // Dequeue elements
    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;

    // Display front after dequeues
    cout << "Front element now: " << q.getFront() << endl;

    // Dequeue remaining element
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
