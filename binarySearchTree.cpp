#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function for level-order traversal
void levelOrderTraversal(Node* root) {
    if (root == NULL) {
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) {
            cout << endl;
            if (!q.empty()) {
                q.push(NULL);
            }
        } else {
            cout << temp->data << " ";
            if (temp->left) {
                q.push(temp->left);
            }
            if (temp->right) {
                q.push(temp->right);
            }
        }
    }
}

// Function to insert data into the BST
Node* insertIntoBST(Node* root, int d) {
    if (root == NULL) {
        return new Node(d);
    }

    if (d > root->data) {
        root->right = insertIntoBST(root->right, d);
    } else {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

// Function to take input for the BST
void takeInput(Node*& root) {
    int data;
    cin >> data;

    while (data != -1) {
        root = insertIntoBST(root, data);  // Update root after insertion
        cin >> data;
    }
}

// Main function
int main() {
    Node* root = NULL;

    cout << "Enter data to create BST: " << endl;
    takeInput(root);
    
    cout << "Printing the BST:" << endl;
    levelOrderTraversal(root);

    return 0;
}
