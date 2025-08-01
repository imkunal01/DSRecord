#include <iostream>
#include<string>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node (int val){
        data = val;
        left = right  = NULL;
    }

};
Node* BinaryTree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    Node* temp = new Node(x);
    cout<<"Left Node: "<<endl;
    temp->left = BinaryTree();
    cout<<"Right Node: "<<endl;
    temp->right = BinaryTree();
    return temp;

}
void displayLevelOder(){
    queue<Node*> q;
    Node* temp = BinaryTree();
    q.push(temp);
     while (!q.empty()) {
        Node* node = q.front();
        q.pop();
        
        cout << node->data << " ";
        
        if (node->left != NULL) {
            q.push(node->left);
        }
        
        if (node->right != NULL) {
            q.push(node->right);
        }
    }
}
int main() {
    displayLevelOder();
    return 0;
}