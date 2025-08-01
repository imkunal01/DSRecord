#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int data){
        data = data;
        left = right = NULL;

    }

};



Node* PreOrder(Node* root){
    cout<<root->data<<" "<<endl;
    PreOrder(root->left);
    PreOrder(root->right);
}

Node* InOrder(Node* root){
    InOrder(root->left);
    cout<<root->data<<" ";
    InOrder(root->right);
}

Node* PostOrder(Node* root){
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->data<<" ";
}


Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* temp = new Node(x);
    //left
    cout<<"Enter Left Child of "<<x<<": ";
    temp->left = BinaryTree();
    cout<<endl;
    //right
    cout<<"Enter Right Child of "<<x<<": ";
    temp->right = BinaryTree();
    return temp;
}


int main(){
    cout<<"Enter Root Node: ";
    Node* root = BinaryTree();
    PreOrder(root);
    InOrder(root);
    PostOrder(root);
}


