#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

void insertEnd(int val) {
    Node* newNode = new Node{val, NULL};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void insertBefore(int value, int newVal) {
    if (!head) return;
    if (head->data == value) { // Insert at beginning
        Node* newNode = new Node{newVal, head};
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next && temp->next->data != value)
        temp = temp->next;

    if (temp->next) {
        Node* newNode = new Node{newVal, temp->next};
        temp->next = newNode;
    } else {
        cout << "Value not found.\n";
    }
}

void insertAfter(int value, int newVal) {
    Node* temp = head;
    while (temp && temp->data != value)
        temp = temp->next;

    if (temp) {
        Node* newNode = new Node{newVal, temp->next};
        temp->next = newNode;
    } else {
        cout << "Value not found.\n";
    }
}

void display() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL\n";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertBefore(20, 15);
    insertAfter(30, 35);
    display();
}
