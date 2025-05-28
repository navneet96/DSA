//Balanced Tree or Not

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

node *buildTree(){
    int data;
    cin>>data;
    if(data == -1 )
        return nullptr;
    node* root  = new node(data);

    root->left = buildTree();
    root->right = buildTree();
    return root;

}

int height(node *root){

    if(root == nullptr)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left , right ) + 1;

    return ans;
}
bool isBalanced(node* root){
    if(root == nullptr)
        return true;

    bool left = isBalanced(root->left);
    bool right = isBalanced(root->right);

    bool diff = abs(height(root->left) - height(root->right) ) <= 1;

    if(left && right && diff)
        return true;
    else 
        return false;


}

int main(){

    cout<<"Enter tree data in preorder (-1 for NULL):  ";
    // Sample input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    node *root = buildTree();
    if(isBalanced(root))
        cout<<"Binary Tree is height Balanced"<<endl;
    else    
        cout<<"Binary Tree is height not Balanced"<<endl;
    return 0;
}