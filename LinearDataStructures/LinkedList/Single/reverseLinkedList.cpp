#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
class Node{
public:
    int data ;
    Node* next;
    Node(int d){
        data = d;
        next = NULL;
    }
};
void disp(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
void disprev(Node *head){
    if(head == NULL) return;
    disprev(head->next);
    cout<<head->data<<" ";
}
int size(Node* head){
    int n = 0;
    Node* temp = head;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

int main() {
    Node*a  = new Node(10);
    Node*b  = new Node(20);
    Node*c  = new Node(30);
    Node*d  = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    disp(a);
    cout<<endl;
    cout<<"Reversed: ";
    disprev(a);
    cout<<endl;
    cout<<"Size Of this LL is: "<<size(a)<<endl;
    return 0;
    
}