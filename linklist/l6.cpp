//Remove duplicates from an Unsorted Linked List

#include<iostream>
#include <unordered_set>
using namespace std;

class Node {

    public:
    int data;
    Node* next;

    //constructor
    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout <<"memory is free for node with data " << value << endl;
    }

};

void printList(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
Node* removeDuplicatesUnsorted(Node* head) {
    if (head == NULL)
        return NULL;

    unordered_set<int> seen;
    Node* curr = head;
    Node* prev = NULL;

    while (curr != NULL) {
        if (seen.find(curr->data) != seen.end()) {
            // Duplicate found; remove it
            prev->next = curr->next;
            curr->next = NULL;
            delete curr;
            curr = prev->next;
        } else {
            // First occurrence
            seen.insert(curr->data);
            prev = curr;
            curr = curr->next;
        }
    }

    return head;
}

int main() {
    
    //created a new node
    Node* head = new Node(10);
    head->next = new Node(15);
    head->next->next = new Node(12);
    head->next->next->next = new Node(11);
    head->next->next->next->next = new Node(12);
    head->next->next->next->next->next = new Node(20);

    cout << "Original List: ";
    printList(head);

    head = removeDuplicatesUnsorted(head);

    cout << "After Removing Duplicates: ";
    printList(head);

}

   