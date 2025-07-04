//Palindrome Linked List Approch 2
#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        cout << "Memory freed for node with data " << data << endl;
    }
};
Node* getMid(Node* head ) {
    Node* slow = head;
    Node* fast = head -> next;
    
    while(fast != NULL && fast-> next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    
    return slow;
}
Node* reverse(Node* head) {
    
    Node* curr = head;
    Node* prev = NULL;
    Node* next = NULL;
    
    while(curr != NULL) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

//Function to check whether the list is palindrome.
bool isPalindrome(Node *head)
{
    if(head -> next == NULL) {
        return true;
    }
    
    //step 1 -> find Middle
    Node* middle = getMid(head);
    //cout << "Middle " << middle->data << endl;
    
    //step2 -> reverse List after Middle
    Node* temp = middle -> next;
    middle -> next = reverse(temp);
    
    //step3 - Compare both halves
    Node* head1 = head;
    Node* head2 = middle -> next;
    
    while(head2 != NULL) {
        if(head2->data != head1->data) {
            return 0;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }

    //step4 - repeat step 2
    //again change the list as it is (optional/Good practice)
    temp = middle -> next;
    middle -> next = reverse(temp);
    
    return true;
}
int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(1);

    if(isPalindrome(head)){
        cout<<"List is Palindrome"<<endl;
    }
    else{
        cout<<"List is not Palindreme"<<endl;
    }
    
    return 0;
}