#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){ this->data = data; this->next = NULL; }
    Node(Node* next,int data){ this->data = data; this->next = NULL; }
    Node(int data, Node* next) : data(data), next(next) {}
};


bool CheckPalindrom(Node* head){

    Node* curr = head;
    stack<int> s;
    while(curr != NULL){
        s.push(curr->data);
        curr = curr->next;

    }
    
    curr = head;
    
    while(curr){
        if(curr->data != s.top()) return false;
        s.pop();
        curr= curr->next;
    }

    return true;
}

int main() {
    // Test: binary 1->0->1->1 (11)
    Node* n4 = new Node(1);
    Node* n3 = new Node(2, n4);
    Node* n2 = new Node(2, n3);
    Node* n1 = new Node(1, n2);

    int result = CheckPalindrom(n4);
    if (result != 1) {
        cout << "Test failed: expected 11, got " << result << "\n";
        return 1;
    }

    cout << result<<" All tests passed\n";

    delete n1;
    delete n2;
    delete n3;
    delete n4;
    return 0;
}