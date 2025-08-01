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
Node* insert(Node* root,int target){
    if(root == NULL){
        Node* temp = new Node(target);
        return temp;
    }
    if(target < root->data){
        root->left = insert(root->left,target);
    }
    else{
        root->right  = insert(root->right,target);
    }
    return root;
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root = NULL;
    int val;
    while(true){
        cin>>val;
        if(val == -1){
            break;
        }
        root = insert(root,val);
    }
    postorder(root);
    cout << endl;
}