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

void deleteEnd() {
    if (!head) return;
    if (!head->next) { delete head; head = NULL; return; }

    Node* temp = head;
    while (temp->next->next)
        temp = temp->next;

    delete temp->next;
    temp->next = NULL;
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
    deleteEnd();
    display();
}
