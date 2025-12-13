#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = NULL;
    }

    void inorder(Node* node) {
        if (node != NULL) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }
    void preorder(Node* node) {
        if (node != NULL) {
            cout << node->data << " ";
            inorder(node->left);
            inorder(node->right);
        }
    }
    void postorder(Node* node) {
        if (node != NULL) {
            inorder(node->left);
            inorder(node->right);
            cout << node->data << " ";
        }
    }
};

int main() {
    BinaryTree t;
    t.root = new Node(1);
    t.root->left = new Node(2);
    t.root->right = new Node(3);
    t.root->left->left = new Node(4);
    t.root->left->right = new Node(5);
    t.root->left->right = new Node(1);

    cout <<"In-order traversal: ";
    t.inorder(t.root);
    cout<<endl;
    cout <<"Pre-order traversal: ";
    t.preorder(t.root);
    cout<<endl;
    cout <<"Post-order traversal: ";
    t.postorder(t.root);
    cout <<endl;

    return 0;
}