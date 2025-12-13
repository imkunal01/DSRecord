#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = NULL;
        right =NULL;
    }
};
int main(){
    int x;
    cin>>x;
    int first,second;
    Node* root = new Node(x);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node*temp = q.front();
        q.pop();
        cout<<"Enter Left Value of "<<temp->data<<": ";
        cin>>first;
        if(first != -1){
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter Right Value of "<<temp->data<<": ";
        cin>>second;
        if(second != -1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    
}