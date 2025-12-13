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
        if (x <= 0) {
            cout << "Invalid index" << endl;
            return;
        }
        Node* temp = new Node(data);
        if (x == 1) { 
            temp->next = head;
            head = temp;
            if (tail == NULL) {
                tail = temp;
            }
            return;
        }
        Node* t = head;
        for (int i = 1; i < x - 1; i++) {
            if (t == NULL) { 
                cout << "Index out of bounds" << endl;
                delete temp;
                return;
            }
            t = t->next;
        }
        if (t == NULL) { 
            cout << "Index out of bounds" << endl;
            delete temp;
            return;
        }
        temp->next = t->next;
        t->next = temp;
        if (temp->next == NULL) {
            tail = temp;
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