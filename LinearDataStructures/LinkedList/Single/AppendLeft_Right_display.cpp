#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void appendLeft(int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void appendRight(int data) {
    if (head == nullptr) {
        appendLeft(data);
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        current->next = newNode;
    }
}

void printList() {
    if (head == nullptr) {
        cout << "Linked List: Empty" << endl;
    } else {
        cout << "Linked List: ";
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
}

int main() {
    int choice, data;

    while (true) {
        cin >> choice;

        if (choice == 1) {
            cin >> data;
            appendLeft(data);
        } else if (choice == 2) {
            cin >> data;
            appendRight(data);
        } else if (choice == 3) {
            printList();
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}