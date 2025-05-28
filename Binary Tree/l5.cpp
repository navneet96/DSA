//Count Leaf Nodes of Binary Tree
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
#include<iostream>
#include<queue>
using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;

    node(int d) {
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
void inorder(node* root, int &count){

    if(root == nullptr)
        return;

    inorder(root->left,count);
    if(root->left==nullptr && root->right == nullptr)
    {
        count++;
    }
    inorder(root->right,count);

    

}
int main(){

    node *root = nullptr;
    int count = 0;
    //build the tree
    root = buildTree(root); 

    //inorder Traversal
    cout<<"Inorder Traversal:"<<endl;
    inorder(root,count); 
    cout<<"Number of Leaf Node =  "<<count<<endl; //3

    return 0;
}