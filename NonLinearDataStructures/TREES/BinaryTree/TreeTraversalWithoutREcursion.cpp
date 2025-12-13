#include<iostream>
#include<vector>
#include<stack>
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



// Node* PreOrder(Node* root){
//     cout<<root->data<<" "<<endl;
//     PreOrder(root->left);
//     PreOrder(root->right );
// }

// Node* InOrder(Node* root){
//     InOrder(root->left);
//     cout<<root->data<<" ";
//     InOrder(root->right);
// }

// Node* PostOrder(Node* root){
//     PostOrder(root->left);
//     PostOrder(root->right);
//     cout<<root->data<<" ";
// }

vector<int>preorder(Node* root){
    vector<int> res;
    if(!root) return res;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        res.push_back(temp->data);
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
    return res;
}
vector<int>inorder(Node* root){
    vector<int> res;
    if(!root) return res;
    stack<Node*>st;
    Node* curr = root;
    while(curr || !st.empty()){
        while(curr){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        res.push_back(curr->data);
        curr = curr->right;
    }
    return res;
}
vector<int>postorder(Node* root){
    vector<int> res;
    if(!root) return res;
    stack<Node*>st1, st2;
    st1.push(root);
    while(!st1.empty()){
        Node* temp = st1.top();
        st1.pop();
        st2.push(temp);
        if(temp->left) st1.push(temp->left);
        if(temp->right) st1.push(temp->right);
    }
    while(!st2.empty()){
        res.push_back(st2.top()->data);
        st2.pop();
    }
    return res;
}
int maxDepth(Node* root) {
    if (!root) return 0;
    queue<Node*> q;
    q.push(root);
    int depth = 0;
    while (!q.empty()) {
        int size = q.size();
        depth++;
        for (int i = 0; i < size; i++) {
            Node* node = q.front();
            q.pop();    
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
    return depth;
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
    vector<int> res = preorder(root);
    cout << "Preorder Traversal (Iterative): ";
    for(int val : res) cout << val << " ";
    cout << endl;
    // PreOrder(root);
    // InOrder(root);
    // PostOrder(root);
    return 0;
}

