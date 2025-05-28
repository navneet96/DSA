//Build a Tree using level order traversal
//1 3 7 11 5 17 -1 -1 -1 -1 -1 -1 -1
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

void levelOrderTraverser(node *root) {
    if (root == nullptr) return;

    queue<node*> q;
    q.push(root);
    q.push(nullptr);
    while (!q.empty()) {
        node *temp = q.front();
        q.pop();

        if (temp == nullptr) {
            cout << endl;
            if (!q.empty()) {
                q.push(nullptr);
            }
        }
        else {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

node* buildFromLevelOrder(node *root) {
    queue<node*> q;
    cout << "Enter data for root = ";
    int data;
    cin >> data;

    if (data == -1)
        return nullptr;

    root = new node(data);
    q.push(root);

    while (!q.empty()) {
        node *temp = q.front();
        q.pop();

        cout << "Enter left node data of " << temp->data << ": ";
        int leftData;
        cin >> leftData;
        if (leftData != -1) {
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node data of " << temp->data << ": ";
        int rightData;
        cin >> rightData;
        if (rightData != -1) {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }

    return root;
}

int main() {
    node *root = nullptr;

    root = buildFromLevelOrder(root);

    cout << "\nLevel Order Traversal:\n";
    levelOrderTraverser(root);

    return 0;
}
