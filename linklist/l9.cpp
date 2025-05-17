// Merge Two Sorted Linked Lists
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
void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* sortTwoLists(Node* first, Node* second) {
    if (first == nullptr) return second;
    if (second == nullptr) return first;

    Node* head;

    if (first->data <= second->data) {
        head = first;
        head->next = sortTwoLists(first->next, second);
    } else {
        head = second;
        head->next = sortTwoLists(first, second->next);
    }

    return head;
}


void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
        // Create first list: 1 -> 2 -> 3
        Node* first = new Node(1);
        first->next = new Node(2);
        first->next->next = new Node(3);
        
        //create second list:  4 -> 5 -> 6
        Node* second= new Node(4);
        second->next = new Node(5);
        second->next->next = new Node(6);
        
        cout << "First Sorted List: ";
    printList(first);

    cout << "Second Sorted List: ";
    printList(second);

    Node* mergedHead = sortTwoLists(first, second);

    cout << "Merged Sorted List: ";
    printList(mergedHead);

    deleteList(mergedHead); // Frees memory

    return 0;
}