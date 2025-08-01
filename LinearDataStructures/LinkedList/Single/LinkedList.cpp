#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        Node* next = NULL;
    }
};
class LinekdList{
    public:
    Node* head;
    Node* tail;
    LinekdList(){
        head = tail = NULL;
    }

    void InsertATHead(int data){
    if(head == NULL){
        head = new Node(data);
        tail = head;
        head->next = NULL;
        return;
    }
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
    void InsertAtTail(int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = tail = temp;
        temp->next = NULL;
    }
    else{
        tail->next = temp;
        tail = temp;
        temp->next = NULL;
    }
}
    void display(){
        Node* temp = head;
        while(head!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }

    }
};
int main(){
    LinekdList ll;
    ll.InsertATHead(1);
    ll.InsertATHead(1);
    ll.InsertATHead(1);
    ll.InsertAtTail(2);
    ll.display();
}