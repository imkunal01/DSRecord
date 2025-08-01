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
class Stack{
    Node* top;
    int size; // actual size of stack
public:
    Stack(){
        top = NULL;
        size = 0;
    }
    void push(int data){
        Node* temp = new Node(data);
        if(temp == NULL){
            return;
        }
        else{
            temp->next = top;
            top = temp;
            size++;
            cout<<data<<" ";
        }
    }
    void pop(){
        if(top == NULL ){
            return;
        }
        else{
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        }
    }
};
int main() {
    Stack s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    return 0;
}