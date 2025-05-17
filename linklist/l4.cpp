//Detect and remove the loop in linked list
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

Node* floydDetectLoop(Node* head) {

    if(head == NULL)
        return NULL;

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast !=NULL) {
        
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout<<"Loop Detected"<<endl;
            return slow;
           
        }
    }
    cout<<"No Loop Detected"<<endl;
    return NULL;

}

Node* getStartingNode(Node* head) {

    if(head == NULL) 
        return NULL;

    Node* intersection = floydDetectLoop(head);
    
    if(intersection == NULL)
        return NULL;
    
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }  

    return slow;

}


Node *removeLoop(Node *head)
{
     if( head == NULL)
        return NULL;

    Node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head;
    
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    return head;
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
    head->next->next->next->next->next->next = head->next->next->next;
    // cout<<"Linked List: ";
    // printList(head);
    // Remove loop before printing
    head = removeLoop(head);
    cout << "Linked List after loop removal: ";
    printList(head);
 
    return 0;
}