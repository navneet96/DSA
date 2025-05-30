/*
Diameter/width of Binary Tree 
Time complexity - O(N^2)
Space complexity - O(H)
Diameter: Longest path (in terms of number of nodes) between any two nodes in the tree
        1
       / \
      3   5
     / \    \
    7  11   17

Path: 7 → 3 → 1 → 5 → 17
*/
#include<iostream>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
    node(int d){
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

// Build the tree using preorder-style input
node* buildTree() {
    int data;
    cin>>data;
    if(data == -1)
        return nullptr;

    node *root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

int height(node *root){

    if(root == nullptr)
        return 0;
    
    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right)+1;
    return ans;
}
int diameter(node* root){

    if(root == nullptr)
        return 0;

    int op1 = diameter(root->left);
    int op2 = diameter(root->right);
    int op3 = height(root->left) + height(root->right) + 1;

    int ans = max(op1, max(op2,op3));
    return ans;
}
int main(){

    cout << "Enter tree data in preorder (-1 for NULL):  ";
    // Sample input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = buildTree();

    cout<<"Diameter of the Tree: "<<diameter(root)<<endl;

    return 0;
}