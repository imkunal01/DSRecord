#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
   void Insert(int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = tail = temp;
        size++;
    }
    else{
        temp->next = head;
        head = temp;
        size++;
    }
}
 bool searchEle(int ele){
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data==ele){
            return true;
        }
        temp = temp->next;
    }
    return false;
}
    void display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<size;
    }
};
int main(){
    LinkedList ll;
    ll.Insert(10);
    ll.Insert(20);
    ll.Insert(30);
    ll.display();
    // ll.searchEle(20);
}