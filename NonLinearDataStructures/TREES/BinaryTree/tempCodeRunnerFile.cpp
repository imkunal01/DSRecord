#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }

};
Node* BinaryTree(){
    int x;
    cin>>x;
    if(x == -1){
        return NULL;
    }
    Node* root  = new Node(x);
    queue <Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        int lefti;
        int righti;
        cout<<"Enter The Left Child "<<temp->data<<": ";
        cin>>lefti;
        if(lefti!=-1){
            temp->left = new Node(lefti);
            q.push(temp->left);
        } 
        cout<<"Enter The Right Child "<<temp->data<<": ";
        cin>>righti;
        if(righti!=-1){
            temp->right = new Node(righti);
            q.push(temp->right);
        } 
    }
    return root;
}

int main(){
    Node* root = BinaryTree();
    queue<Node*> q;
    q.push(root);
    int size = 0;
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        size++;
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    cout<<"Size of Binary Tree: "<<size<<endl;
    return 0;

}