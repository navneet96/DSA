#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};
 void InsertAtHead(Node * &head,int d){
    //new node insert
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
 }
 void printList(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
 }

 vector<Node *> merge(Node *head1, Node *head2){

    //store the head
    Node *curr1 = head1;
    Node *curr2 = head2;

    // traverse both list and merge
    while (curr1 != nullptr && curr2 != nullptr)
    {
        Node *ptr1 = curr1->next;
        Node *ptr2 = curr2->next;

        curr2->next = curr1->next;
        curr1->next = curr2;

        curr1 = ptr1;
        curr2 = ptr2;
    }

    return {head1,curr2};
    
 }
 void printCircularListRecursion(Node *curr, Node *head){

    if(head == nullptr)
        return;
    
    cout<<curr->data<<" ";

    if(curr->next == head)
        return;
    
    printCircularListRecursion(curr->next, head);
    
 }

void printCircularListIterative(Node *head){

    if(head == nullptr)
        return ;
    
    Node *curr = head;
    do{
        cout<<curr->data<<" ";
        curr=curr->next;
    }while (curr != head);
   cout<<endl;
    
}
Node * deleteFirstNode(Node *last){

    if(last == nullptr){
        cout<<"list is empty"<<endl;
        return nullptr;
    }

    Node *temp = last->next;
    if(temp == last ){
        delete temp;
        last = nullptr;
    }else{
        last->next = temp->next;
        delete temp;
    }
    return last;
}
int main(){
  /*
   // Merge a linked list into another linked list at alternate positions
    //create linked list  1,2,3
    Node*  head1 = new Node(1);
    head1->next = new Node(2);
    head1->next->next = new Node(3);
    //create linked list 4,5,6,7,8
    Node* head2 = new Node(4);
    head2->next  = new Node(5);
    head2->next->next = new Node(6);
    head2->next->next->next = new Node(7);
    head2->next->next->next->next = new Node(8);
    cout<<"Linked List 1 :"<<endl;
    printList(head1);
    cout<<"Linked List 2 : "<<endl;
    printList(head2);
    vector<Node *> ar = merge(head1,head2);
    printList(ar[0]);
    printList(ar[1]);
*/
/*
// Traverse of circular Linked List
    // create a circular linked list 
    // 11 ,2,,56,12
    Node *head = new Node(11);
    head->next = new Node(2);
    head->next->next = new Node(56);
    head->next->next->next = new Node(12);
    head->next->next->next->next = head;

    printCircularListRecursion(head,head);
    printCircularListIterative(head);
*/
// Delete the first node of the circular linked list
    Node *first = new Node(2);
    first->next = new Node(3);
    first->next->next = new Node(4);

    Node * last = first->next->next;
    last->next = first;

    cout<<"Original list :"<<endl;
    printCircularListIterative(first);

    //Delete the first node 
    last = deleteFirstNode(last);
    cout<<"List after deleting First Node :"<<endl;
    printCircularListIterative(last);
    return 0;
}