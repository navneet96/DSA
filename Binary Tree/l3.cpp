//Implementation of Binary tree
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
//inorder traversal iteration  7 3 11 1 17 5
//preorder traversal iteration 1 3 7 11 5 17 
//postorder teraversal iteration 7 11 3 17 5 1
#include<iostream>
#include<stack>
using namespace std;

class node {
public:
    int data;
    node* left;
    node* right;

    node(int d) {
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

// Iterative Inorder: Left → Root → Right
void inorderIterative(node* root) {
    stack<node*> st;
    node* curr = root;

    cout << "Inorder Traversal (Iterative): ";
    while (curr != nullptr || !st.empty()) {
        while (curr != nullptr) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
    cout << endl;
}

// Iterative Preorder: Root → Left → Right
void preorderIterative(node* root) {
    if (root == nullptr) return;

    stack<node*> st;
    st.push(root);

    cout << "Preorder Traversal (Iterative): ";
    while (!st.empty()) {
        node* curr = st.top();
        st.pop();
        cout << curr->data << " ";

        if (curr->right)
            st.push(curr->right);
        if (curr->left)
            st.push(curr->left);
    }
    cout << endl;
}

// Iterative Postorder: Left → Right → Root
void postorderIterative(node* root) {
    if (root == nullptr) return;

    stack<node*> s1, s2;
    s1.push(root);

    while (!s1.empty()) {
        node* curr = s1.top();
        s1.pop();
        s2.push(curr);

        if (curr->left)
            s1.push(curr->left);
        if (curr->right)
            s1.push(curr->right);
    }

    cout << "Postorder Traversal (Iterative): ";
    while (!s2.empty()) {
        cout << s2.top()->data << " ";
        s2.pop();
    }
    cout << endl;
}

int main() {
    cout << "Enter tree data (-1 for NULL): ";
    // Sample input: 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    node* root = buildTree();

    inorderIterative(root);
    preorderIterative(root);
    postorderIterative(root);

    return 0;
}
