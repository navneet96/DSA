//Height of Binary Tree
//longest path between root node and leaf node
/*
Time complexity - O(n)
Space complexity - O(height)
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
    cin >> data;

    if (data == -1)
        return nullptr;

    node* root = new node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
int height(node* root){
    if(root == nullptr)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    int ans = max(left,right) + 1;

    return ans;

}


int main() {
    cout << "Enter tree data (-1 for NULL): ";
    // Sample input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node* root = buildTree();

    cout<<"Height of a Binary Tree: "<<height(root)<<endl;
    return 0;
}
