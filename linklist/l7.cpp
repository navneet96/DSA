//Split list into two half
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void splitList(Node* &head, Node* & firstHalf, Node* &secondHalf){

    if(head == nullptr || head->next == nullptr){
        firstHalf = head;
        secondHalf = nullptr;
        return;
    }

    Node* slow = head;
    Node* fast = head->next;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        ;
    }

    firstHalf = head;
    secondHalf = slow->next;
    slow->next = nullptr;
    

}
int main() {
    // Create sample list
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(5);
    head->next->next->next = new Node(7);
    //head->next->next->next->next = new Node(9);
    cout<<"Linked List: ";
    printList(head);
    Node* firstHalf = NULL;
    Node* secondHalf = NULL;

    splitList(head,firstHalf,secondHalf);
    cout<<"First Half: ";
    printList(firstHalf);
    cout<<"Second Half: ";
    printList(secondHalf);
    return 0;

}