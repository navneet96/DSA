/*
Diameter/width of Binary Tree 
Time complexity - O(N)
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

pair<int , int>diameterFast(node * root){

    // base case
    if(root == nullptr){
        pair<int,int> p = make_pair(0,0);  //(diameter, height)
        return p;
    }

    pair<int , int> left = diameterFast(root->left);
    pair<int, int > right = diameterFast(root->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 1;

    pair<int,int> ans;
    ans.first = max(op1,max(op2,op3));
    ans.second = max(left.second, right.second) + 1;

    return ans;
}
int diameter(node* root){

    return diameterFast(root).first;
}
int main(){

    cout << "Enter tree data in preorder (-1 for NULL):  ";
    // Sample input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node *root = buildTree();

    cout<<"Diameter of the Tree: "<<diameter(root)<<endl;

    return 0;
}