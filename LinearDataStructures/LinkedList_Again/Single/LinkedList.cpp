#include<iostream>
#include<vector>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


// class LinkedList{
//     public:
//     Node* head;
//     Node* tail;
//     LinkedList(){
//         head = tail = NULL;
//     }

//     // void InsertAtHead(int data){
//     //     Node* temp = new Node(data);
//     //     if(head== NULL){
//     //         head = temp;
//     //         tail = temp;
//     //         return;

//     //     }
//     //     temp->next = head;
    //     head = temp;
    // }
    // void display(){
    //     Node* temp = head;
    //     while(temp!=NULL){
    //         cout<<temp->data;
    //         temp = temp->next;
    //     }
    // }
// };

int main(){
    vector<int>v = {1,2,3,4,5};
    for(int i = 0;i<v.size();i++){
        Node* temp = new Node(v[i]);
        cout<<temp->data<<" ";
    }
    return 0;
}