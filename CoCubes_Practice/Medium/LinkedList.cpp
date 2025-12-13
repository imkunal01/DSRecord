#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};
Node* head = NULL;
void insertAthead(int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;

}

Node* convertToLL(vector<int>arr){
    if(arr.empty()) return NULL;
    head = new Node(arr[0]);
    Node* trev = head;
    for(int i = 0;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        trev->next = temp;
        trev = temp;
    }
    return head;
}

vector<int>convertToArray(Node* head){
    vector<int> arr;
    Node* temp = head;
    while( temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return arr;
}

int main(){

}