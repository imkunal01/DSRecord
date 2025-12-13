#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    int size;


    Node(int data){
        this->data = data;
        left = right = NULL;
        size = 0;
    }
};

Node* BinaryTree(){

    int x;
    cin>>x;
    Node* temp = new Node(x);
    if(x == -1){
        return NULL;
    }
    temp->left = BinaryTree();
    temp->right = BinaryTree();
    return temp;
}
vector<int> LevelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    vector<int>ans;
    Node* temp;
    while(!q.empty()){
        temp = q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return ans;
}

int main(){
    Node* root = BinaryTree();
    int n = LevelOrder(root).size();
    for(int i: LevelOrder(root)){
        cout<<i<<"->";
    }
}
