//Palindrome Linked List Approch 1 
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


void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

bool checkPalindrome(vector<int> arr){

    int n = arr.size();
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
bool isPalindrome(Node* head){

    vector<int> arr;
    Node* temp = head;
    while(temp != nullptr){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return checkPalindrome(arr);
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
