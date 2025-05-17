//Length of A Linked List 
//Middle Element of Linked List(Iterative/Recursive)
//Reverse the Linked List(Iterative/slow and fast)

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
int findLength(Node *head){
    int len = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

Node *findMiddleInteraive(Node* & head){

    int len = findLength(head);
    int midLen = len/2;
    Node *temp = head;
    int cnt = 0;
    while(cnt < midLen){

        temp = temp->next;
        cnt++;

    }
    return temp;

}

Node * findMiddleFastSlow(Node *head)
{

    if(head == nullptr){
        return nullptr;
    }

    Node *slow = head;
    Node *fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;


}
void reverseListIteration(Node *& head)
{
    Node *prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while(current != nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
void reverseListRecursion(Node*& head) {
    // Base case: empty list or single node
    if (head == nullptr || head->next == nullptr)
        return;

    Node* rest = head->next;
    reverseListRecursion(rest);  // Recursively reverse the rest

    // head becomes the last node
    head->next->next = head;
    head->next = nullptr;

    // Update head to the new front
    head = rest;
}


int main() {
    
    //created a new node
    Node* head = new Node(10);
    head->next = new Node(12);
    head->next->next = new Node(14);
    head->next->next->next = new Node(16);
    head->next->next->next->next = new Node(18);
    head->next->next->next->next->next = new Node(20);
    cout<<"Linked List: ";
    printList(head);


    int len = findLength(head);
    cout<<"\nLength of List: "<<len;

    
    reverseListIteration(head);
    cout<<"\nReverse Linked List: ";
    printList(head);

    reverseListRecursion(head);
    cout<<"\nReverse Linked List: ";
    printList(head);

    Node * mid = findMiddleInteraive(head);

    cout<<"\nMiddle Elenment of List:  "<<mid->data<<endl;

    Node * mid1 = findMiddleFastSlow(head);

    cout<<"\nMiddle Elenment of List:  "<<mid1->data<<endl;


    return 0;
}