#include <iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(Node* next,int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data, Node* next,Node* prev) : data(data), next(next) , prev(prev){}
};
Node* convertArrToDLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 0;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        prev->next = temp;
        prev = temp;
    }
    return head->next;
}
void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int main() {
    vector<int>arr = {1,2,3,4,5};
    Node* head = convertArrToDLL(arr);
    display(head);
    return 0;
}