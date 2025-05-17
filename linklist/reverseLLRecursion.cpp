// Recursive C++ program to reverse a linked list 
// Time complexity -O(n) Space Complexity -  O(n) 
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data= data;
        this->next = nullptr;
    }
};

void printList(Node * node){

    while (node)    
    {
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL"<<endl;
    
}

 Node *reverseList(Node *head){

    //base case 
    if(head == NULL || head->next == NULL)
        return head;
    // reverse the rest of linked list and put the first element at the end
    Node *rest = reverseList(head->next);
    // Make the current head as last node of remaining linked list
    head->next->next = head;
    // Update next of current head to NULL
    head->next = NULL;
    return rest;
 }
int main(){

    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next =  new Node(5);
    cout<<"Linked List:"<<endl;
    printList(head);

    head = reverseList(head);
    cout<<"Reversed Linked List: "<<endl;
    printList(head);

    return 0;
}

