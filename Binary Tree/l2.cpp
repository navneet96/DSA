//Implementation of Binary tree
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//inorder traversal  7 3 11 1 17 5
//preorder traversal  1 3 7 11 5 17 
//postorder teraversal 7 11 3 17 5 1
#include<iostream>
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

node *buildTree(node* root){
    cout<<"Enter the data = "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1 )
        return nullptr;

    cout<<"Enter the left data = "<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the right data = "<<endl;
    root->right = buildTree(root->right);
    return root;

}

void inorder(node* root){

    if(root == nullptr)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void preorder(node* root){

    if(root == nullptr)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root){

    if(root == nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}
int main(){

    node *root = nullptr;

    //build the tree
    root = buildTree(root); 

    //inorder Traversal
    cout<<"Inorder Traversal:"<<endl;
    inorder(root); 
    cout<<endl;
    //preorder Traversal
    cout<<"Preorder Traversal:"<<endl;
    preorder(root);
    cout<<endl;

    //postorder Traversal
    cout<<"Postorder Traversal:"<<endl;
    postorder(root);
        cout<<endl;

    return 0;
}