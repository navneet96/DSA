//Remove duplicates from a sorted Linked List
#include<iostream>
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
Node * removeDuplicates(Node *&head)
{
    if(head == NULL) return NULL;

    Node* curr = head;
    while(curr != NULL && curr->next != NULL) {
        if(curr->data == curr->next->data) {
            Node* duplicate = curr->next;
            curr->next = duplicate->next;
            duplicate->next = NULL; // Good practice
            delete duplicate;
        } else {
            curr = curr->next;
        }
    }
    return head;
}
int main() {
    
    //created a new node
    Node* head = new Node(10);
    head->next = new Node(12);
    head->next->next = new Node(12);
    head->next->next->next = new Node(16);
    head->next->next->next->next = new Node(18);
    head->next->next->next->next->next = new Node(20);

    cout << "Original List: ";
    printList(head);

    head = removeDuplicates(head);

    cout << "After Removing Duplicates: ";
    printList(head);

}

   