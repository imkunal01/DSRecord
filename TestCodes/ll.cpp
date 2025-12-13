#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

// Node class represents a single element in the linked list
class Node{
public:
    int data;    // Data to be stored in the node
    Node* next;  // Pointer to the next node in the list

    // Constructor to initialize a new node with data and next as NULL
    Node(int d){
        data= d;
        next = NULL;
    }
};

// LinkedList class represents the linked list with head and tail pointers
class LinkedList{
public:
    Node* head;  // Pointer to the first node in the list
    Node* tail;  // Pointer to the last node in the list
    int size;    // To keep track of the number of nodes in the list

    // Constructor to initialize an empty list
    LinkedList(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    // Function to insert a node at the end of the linked list
    void InsertAtEnd(int data){
        Node* temp = new Node(data);  // Create a new node with the given data
        if(size == 0){  // If the list is empty
            head = tail = temp;  // Head and tail both point to the new node
            size++;  // Increase the size of the list
        }
        else{
            tail->next = temp;  // Link the current tail to the new node
            tail = temp;  // Update tail to point to the new node
            size++;  // Increase the size of the list
        }
    }

    // Function to insert a node at the head of the linked list
    void InsertAtHead(int data){
        Node* temp = new Node(data);  // Create a new node with the given data
        if(size == 0){  // If the list is empty
            head = tail = temp;  // Head and tail both point to the new node
            size++;  // Increase the size of the list
        }
        else{
            temp->next = head;  // Point the new node's next to the current head
            head = temp;  // Update head to point to the new node
            size++;  // Increase the size of the list
        }
    }

    // Function to insert a node at a specific index in the linked list
    void InserAtInx(int idx, int data) {
        // Check for invalid index
        if (idx < 0 || idx > size) {
            cout << "Invalid Index" << endl;
            return;
        }

        // If index is 0, insert at the head
        if (idx == 0) {
            InsertAtHead(data);
        } 
        // If index is equal to the size, insert at the end
        else if (idx == size) {
            InsertAtEnd(data);
        } 
        else {
            Node* temp = new Node(data);  // Create a new node with the given data
            Node* t = head;  // Start from the head node

            // Traverse the list to reach the node just before the insertion point
            for (int i = 1; i < idx; i++) {
                t = t->next;  // Move to the next node
            }

            // Insert the new node at the index
            temp->next = t->next;  // New node points to the current node's next
            t->next = temp;  // Current node points to the new node
            size++;  // Increase the size of the list
        }
    }

    // Function to display the contents of the linked list
    void disp(){
        Node* temp = head;  // Start from the head
        // Traverse through the list and print each node's data
        while(temp != NULL){
            cout << temp->data << " ";  // Print the current node's data
            temp = temp->next;  // Move to the next node
        }
    }
};

// Main function to test the LinkedList class
int main() {
    LinkedList ll;  // Create a new linked list

    // Insert elements into the linked list
    ll.InsertAtEnd(10);
    ll.InsertAtEnd(30);
    ll.InsertAtEnd(40);
    ll.InsertAtEnd(50);

    // Insert element 20 at index 1
    ll.InserAtInx(1, 20);

    // Display the contents of the linked list
    ll.disp();

    return 0;
}
