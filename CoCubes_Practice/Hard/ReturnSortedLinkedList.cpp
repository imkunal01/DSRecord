#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data= data;
        this->next = NULL;
    }
};
Node* head = NULL;

Node* convertToLL(vector<int>arr){
    if(arr.empty()) return NULL;
    head = new Node(arr[0]);
    Node* trev = head;
    for(int i = 0;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        trev->next = temp;
        trev = temp;
    }
    return head;
}

vector<int>convertToArray(Node* head){
    vector<int> arr;
    Node* temp = head;
    while( temp!=NULL){
        arr.push_back(temp->data);
        temp = temp->next;
    }
    return arr;
}

vector<int> mergeArrays(vector<int> &a, vector<int> &b) {
    vector<int> res;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) res.push_back(a[i++]);
        else res.push_back(b[j++]);
    }

    while (i < a.size()) res.push_back(a[i++]);
    while (j < b.size()) res.push_back(b[j++]);

    return res;
}

Node* mergeByConverting(Node* head1, Node* head2) {
    vector<int> arr1 = convertToArray(head1);
    vector<int> arr2 = convertToArray(head2);
    vector<int> merged = mergeArrays(arr1, arr2);
    return convertToLL(merged); 
}

void printLL(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "NULL";
}





Node* mergeLists(Node* list1 , Node*list2){
    
}
int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    Node* head1 = convertToLL(arr1);

    vector<int> arr2 = {2, 4, 6, 8};
    Node* head2 = convertToLL(arr2);

    cout << "List 1: ";
    printLL(head1);
    cout << endl;
    
    cout << "List 2: ";
    printLL(head2);
    cout << endl;
    
    Node* mergedHead = mergeByConverting(head1, head2);
    
    cout << "Merged List: ";
    printLL(mergedHead);
    cout << endl;

    return 0;
}