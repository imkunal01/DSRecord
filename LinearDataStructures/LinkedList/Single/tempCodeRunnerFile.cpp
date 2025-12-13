// You are using GCC
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    LinkedList(){
        head = tail = NULL;
    }
    void insert(int data){
        Node* temp = new Node(data);
        if(head == NULL){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
    }
    void insertidx(int x, int data){
        Node* temp = new Node(data);
        Node* t = head;
        for(int i = 1;i<x-1;i++){
            t= t->next;
        }
        temp->next = t->next;
        t->next = temp;
    }
    void disp(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

    
};

int main(){
    LinkedList ll;
    int n;
    cin>>n;
    
    for(int i = 0;i<n;i++){
        ll.insert(i);
    }
    int x;
    cin>>x;
    int ele;
    cin>>ele;
    ll.insertidx(x,ele);
    ll.disp();
}