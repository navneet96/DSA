#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){

    cout<< "Enter the data = "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1 )
        return NULL;

    cout<<"Enter data for inserting in left of "<<data <<endl;
    root -> left = buildTree(root->left);

    cout<<"Enter data for inserting in right of "<<data <<endl;
    root -> right = buildTree(root->right);

    return root;

}
void inorder(node *root, int &count){
    //base case
    if(root == NULL)
        return ;
    inorder(root->left, count);
    if(root->left==NULL && root->right == NULL)
        count++;
    inorder(root->right,count);
}
int noOfLeafNodes(node *root){
    int count = 0;
    inorder(root,count);
    return count;

}
void inorder(node *root){
    if(root == NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void preorder(node* root ){
    if(root == NULL)
        return ;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    if(root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int heightOfTree(node* root){

    //base case
    if(root == NULL)
        return 0;

    int left = heightOfTree(root->left);
    int right = heightOfTree(root->right);

    int ans = max(left,right)+1;
    return ans;
}
int diameterOfTree(node * root){
    //O(n^2)
    if(root == NULL)
        return 0;
    
    int op1 = diameterOfTree(root->left);
    int op2 = diameterOfTree(root->right);
    int op3 = heightOfTree(root->left)+heightOfTree(root->right);

    int ans = max(op1,max(op2,op3));
    return ans;
}
int main(){
    node* root = NULL;

    //create a tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 6 -1 -1
    cout <<"Inorder traversal is:  ";
    inorder(root);
    
    cout<<endl<<"Preorder traversal is: ";
    preorder(root);
    cout<<endl<<"Postorder traversal is: ";
    postorder(root);
    int leaf = noOfLeafNodes(root);
    cout<<endl<<"No. of Leaf Nodes = "<<leaf<<endl;
    int height = heightOfTree(root);
    cout<<"Height of Tree = "<<height<<endl;
    int diameter = diameterOfTree(root);
    cout<<"Diameter of Tree = "<<diameter;
    return 0;
}