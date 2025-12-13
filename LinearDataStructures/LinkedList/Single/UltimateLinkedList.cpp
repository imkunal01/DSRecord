#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int d) {
        data = d;
        next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    void InsertAtEnd(int data) {
        Node* temp = new Node(data);
        if (size == 0) {
            head = tail = temp;
            size++;
        } else {
            tail->next = temp;
            tail = temp;
            size++;
        }
    }

    void InsertAtHead(int data) {
        Node* temp = new Node(data);
        if (size == 0) {
            head = tail = temp;
            size++;
        } else {
            temp->next = head;
            head = temp;
            size++;
        }
    }

    void InserAtInx(int idx, int data) {
        if (idx < 0 || idx > size) {
            cout << "Invalid Index" << endl;
            return;
        }

        if (idx == 0) {
            InsertAtHead(data);
        } else if (idx == size) {
            InsertAtEnd(data);
        } else {
            Node* temp = new Node(data);
            Node* t = head;

            for (int i = 1; i < idx-1; i++) {
                t = t->next;
            }

            temp->next = t->next;
            t->next = temp;
            size++;
        }
    }
    void deleteAThead(){
        if(size==0){
            cout<<"List is empty"<<endl;
        }
        if(size == 1){
            head = tail = NULL;
        }
        else{
            head=head->next;
            size--;
        }
    }
    void deleteATtail(){
        if(size==0){
            cout<<"List is empty"<<endl;
        }
        else{
            head=head->next;
            size--;
        }
    }
    

    void disp() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main() {
    LinkedList ll;

    ll.InsertAtEnd(10);
    ll.InsertAtEnd(30);
    ll.InsertAtEnd(40);
    ll.InsertAtEnd(50);

    ll.InserAtInx(1, 20);
    ll.deleteAThead();
    ll.disp();

    return 0;
}