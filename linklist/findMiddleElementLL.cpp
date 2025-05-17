// Find the middle element of a linked list 
// Time complexity -O(n) Space Complexity -  O(1) 
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int data){
        this->data = data;
        this->next=nullptr;
    }
};


Node *findMiddle(Node * head){

        int 
}
void printList(Node * node){
    while(node!=nullptr){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL"<<endl;
}
int main(){

    //insert 1,2,3,4,5
    Node *head = new Node(1);
    head->next=new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    //print the list
    printList(head);

    head = findMiddle(head);
    cout<<"Reversed Linked List "<<endl;
     printList(head);
    return 0;
}
