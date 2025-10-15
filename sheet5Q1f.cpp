#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;

void insertEnd(int val) {
    Node* newNode = new Node{val, NULL};
    if (!head) { head = newNode; return; }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
}

void deleteSpecific(int val) {
    if (!head) return;
    if (head->data == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;
    while (temp->next && temp->next->data != val)
        temp = temp->next;

    if (temp->next) {
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    } else {
        cout << "Value not found.\n";
    }
}

void display() {
    Node* temp = head;
    while (temp) { cout << temp->data << "->"; temp = temp->next; }
    cout << "NULL\n";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    deleteSpecific(20);
    display();
}
