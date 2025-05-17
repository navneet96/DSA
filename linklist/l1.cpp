//Linked List 
//Traverse
//Insert A Head,tail,Position

#include<iostream>
#include<map>
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
void insertAtHead(Node *&head, int d){
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;

}
void insertAtTail(Node* &tail, int d){
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;

}
void insertAtPosition(Node* &head, int position, int data){
    Node *newNode = new Node(data);

    //Inserting at the head (position = 0)
    if(position == 0){
        newNode->next = head;
        head = newNode;
    } 

    Node *current = head;
    int index = 0;
    while (current!=nullptr && index < position - 1)
    {
       current = current->next;
       index++;
    }

    if(current == nullptr){
        cout<<"Position out of bound"<<endl;
        delete newNode;
    }

    //Insert the new node

    newNode->next = current->next;
    current->next = newNode;
    

}
void deleteAtHead(Node *& head){

    Node *temp = head;
    head = head->next;
    temp->next = nullptr;
    delete temp;

}

void deleteAtTail(Node *& head)
{
    //Empty list
    if(head == nullptr){
        cout<<"List is already empty";
    }
    //only one node
    if(head->next==nullptr){
        delete head;
        head = nullptr;
    }

    //More than on node
    Node *prev = nullptr;
    Node *current = head;

    while(current->next != nullptr){
        prev =current;
        current = current->next;
    }
    prev->next=nullptr;
    delete current;
}

void deleteAtPosition(Node *&head, int position){

     //Empty list
     if(head == nullptr){
        cout<<"List is already empty";
    }
    //only one node
    if(head->next==nullptr){
        delete head;
        head = nullptr;
    }
     //More than on node
     Node *prev = nullptr;
     Node *current = head;
    int index = 1;
     while(index < position){
         prev =current;
         current = current->next;
         index++;
     }
     prev->next=current->next;
     current->next= nullptr;
     delete current;

}

int main() {
    
    //created a new node
    Node* head = new Node(10);
    head->next = new Node(12);
    head->next->next = new Node(14);
    cout<<"Linked List: ";
    printList(head);

    insertAtHead(head,16);
    cout<<"\nInsert 16 At head :";
    printList(head);

    //find current tail
    Node *tail = head;
    while(tail->next!=nullptr){
        tail = tail->next;
    }
    insertAtTail(tail,18);
    cout<<"\nInsert 18 At tail :";
    printList(head);

    insertAtPosition(head,5,20);
    cout<<"\nInsert 20 at Position 5 :";
    printList(head);

    deleteAtHead(head);
    cout<<"\nList after delete the head :";
    printList(head);

    deleteAtTail(head);
    cout<<"\nList after delete the tail :";
    printList(head);

    deleteAtPosition(head,2);
    cout<<"\nList after delete the Position 2 :";
    printList(head);


    return 0;

}

