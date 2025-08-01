#include<iostream>
#include<queue>
using namespace std;
class Node{
public: 
    int data;
    Node* left;
    Node* right;
    Node(int value){
        value = data;
        left = right = NULL;
    }
};
int main(){
    queue<Node*>q;
    int x;
    cin>>x;
    int first,second;
    Node* root = new Node(x);
    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        cin>>first;
        cout<<"Enter Left Value: ";
        if(first!=-1){
            temp->left  = new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter Right Value: ";
        if(second != -1){
            temp->right = new Node(second);
            q.push(temp->right);
        }
        if(second == -1 && first == -1){

            break;

        }
    }
}