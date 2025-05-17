//Sort linked list of 0s 1s 2s
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        cout << "Memory freed for node with data " << data << endl;
    }
};

void insertAtTail(Node*& tail, Node* curr) {
    curr->next = NULL; // Detach the node from its old position
    tail->next = curr;
    tail = curr;
}

Node* sortList(Node* head) {
    // Dummy heads and tails for 0, 1, 2
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    while (curr != NULL) {
        int value = curr->data;
        Node* nextNode = curr->next; // store next before breaking the link
        if (value == 0)
            insertAtTail(zeroTail, curr);
        else if (value == 1)
            insertAtTail(oneTail, curr);
        else
            insertAtTail(twoTail, curr);
        curr = nextNode;
    }

    // Connect the three lists
    if (oneHead->next)
        zeroTail->next = oneHead->next;
    else
        zeroTail->next = twoHead->next;

    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // New head
    head = zeroHead->next;

    // Free dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void deleteList(Node*& head) {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Create unsorted list: 1 -> 2 -> 0 -> 1 -> 2 -> 0 -> 1
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(1);
    head->next->next->next->next = new Node(2);
    head->next->next->next->next->next = new Node(0);
    head->next->next->next->next->next->next = new Node(1);

    cout << "Original List: ";
    printList(head);

    head = sortList(head);

    cout << "Sorted List: ";
    printList(head);

    deleteList(head);
    return 0;
}
