#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head= NULL;
        tail = NULL;
        size =0;
    }
    void InsertAttail(int data){
        Node* temp = new Node(data);
        if(size == 0){
            head = tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void InsertAtHead(int data){
        Node* temp = new Node(data);
        if(size == 0){
            head = tail = temp;
        }
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void InsertAtIdx(int idx ,int data){
        if(idx<0 || idx > size){
            cout<<"Invalid Index"<<endl;
        }
        if(idx ==0){
            InsertAtHead(data);
        }
        else if(idx == size){
            InsertAttail(data);
        }
        else{
            Node*temp = new Node(data);
            Node* t = head;
            for(int i = 1;i<idx-1;i++){
                t = t->next;
            }
            temp->next = t->next;
            t->next = temp;
            size++;
        }

    }
    void disp(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
};
int main() {
    LinkedList ll;

    ll.InsertAtHead(10);
    ll.InsertAttail(20);
    ll.InsertAttail(30);
    ll.InsertAttail(40);
    ll.InsertAttail(50);
    ll.InsertAtIdx(5,60);
    ll.disp();
    return 0;
}