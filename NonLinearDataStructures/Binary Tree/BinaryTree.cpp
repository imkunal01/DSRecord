#include<iostream>

using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right  = NULL;
    }
};
Node *BinaryTree(){
    int x;
    cin>>x;
    if(x == -1) return NULL;
    Node *temp = new Node(x);
    cout<<"Enter Left Child if "<<x<<": ";
    temp->left = BinaryTree();
    cout<<"Enter Right Child if "<<x<<": ";
    temp->right = BinaryTree();
    return temp;
};
void Inorder(Node* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<endl;
    Inorder(root->right);
}
void Preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<endl;
    Inorder(root->left);
    Inorder(root->right);
}
void Postorder(Node* root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    Inorder(root->right);
    cout<<root->data<<endl;
}

int main(){
    cout << "Enter the root node first: ";
    Node* root = BinaryTree();

    cout << "\nIn-order Traversal: ";
    Inorder(root);
    cout << endl;

    cout << "Pre-order Traversal: ";
    Preorder(root);
    cout << endl;

    cout << "Post-order Traversal: ";
    Postorder(root);
    cout << endl;
}