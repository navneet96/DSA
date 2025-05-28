//Implementation of Binary Tree
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//level order traversal
#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{

    public: 
    int data;
    node *left;
    node *right;

    node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;

    }

};

  node* buildTree(node *root){
    cout<<"Enter the data = "<<endl;
    int data;
    cin>> data;
    root = new node(data);
    if(data == -1 )
        return nullptr;

cout << "Enter data for inserting in left of " << data << " = ";
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << " = ";
    root->right = buildTree(root->right);
    return root;

  }

  void levelOrderTraverser(node *root){

    queue <node*> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if(temp== nullptr){
            cout<<endl;
            if(!q.empty()){
                q.push(nullptr);
            }
        }
        else{
            cout<<temp->data<< " ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
            
        }
    }
    
  }
  void reverseLevelOrder(node* root) {
    if (root == nullptr)
        return;

    queue<node*> q;
    stack<node*> s;

    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        // Push node to stack
        s.push(temp);

        // Push right child first so left is processed before right when popping stack
        if (temp->right)
            q.push(temp->right);
        if (temp->left)
            q.push(temp->left);
    }

    // Pop all items from stack
    while (!s.empty()) {
        cout << s.top()->data << " ";
        s.pop();
    }
    cout << endl;
}
void reverseLevelOrderByLevel(node* root) {
    if (root == nullptr)
        return;

    queue<node*> q;
    stack<vector<int>> s;

    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            node* temp = q.front();
            q.pop();
            level.push_back(temp->data);

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }

        s.push(level); // Store the current level in stack
    }

    // Print levels in reverse order
    while (!s.empty()) {
        vector<int> level = s.top();
        s.pop();
        for (int val : level)
            cout << val << " ";
        cout << endl;
    }
}



int main(){

    node* root = nullptr;

    //create a tree
    root = buildTree(root);

     //level order traversal
    cout << "\nLevel Order Traversal:\n";
    levelOrderTraverser(root);

    // Reverse Level Order Traversal
    cout << "\nReverse Level Order Traversal:\n";
    reverseLevelOrder(root);

    cout << "\nReverse Level Order Traversal Level by level:\n";
    reverseLevelOrderByLevel(root);

    return 0;
}