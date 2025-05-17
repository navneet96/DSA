// Reverse List In K Groups
//check list is circular or not
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
int getLength(Node *head,int k){
    int len = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

Node* kReverse(Node* head , int k){

    //base call
    if(head == nullptr){
        return nullptr;
    }

    //step1 : Reverse first k nodes
    Node* next = nullptr;
    Node* curr = head;
    Node* prev = nullptr;
    int count= 0;

    while (curr != nullptr && count< k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
   
    //step 2 :Recursively reverse the rest

    if(next!=nullptr){
        if(getLength(next,k)>=k){
            head->next = kReverse(next,k);
        }
        else{
            head->next = next; // Connect remaining nodes as-is
        }
    }
    //step3: Return new head
    return prev;
}

bool isCircularList(Node* head){

    if (head == nullptr)
        return true;

    Node* temp = head->next;

    // Traverse the list to detect a cycle that leads back to head
    while (temp != nullptr && temp != head) {
        temp = temp->next;
    }

    // If we returned to the head, it's circular
    return temp == head;
    
}

int main() {
    
    //created a new node
    Node* head = new Node(10);
    head->next = new Node(12);
    head->next->next = new Node(14);
    head->next->next->next = new Node(16);
    head->next->next->next->next = new Node(18);
    head->next->next->next->next->next = new Node(20);
    
    //Uncomment this to meke it circular
    //head->next->next->next->next->next->next = head;
    cout<<"Linked List: ";
    printList(head);

    int k = 2;
    head = kReverse(head, k);
    cout<<"\nAfter 2 reverse List: ";
    printList(head);

    if(isCircularList(head))
        cout<<"List is Circular"<<endl;
    else
        cout<<"List is not circular"<<endl;
    
    return 0;
}