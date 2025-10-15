#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node* head = NULL;

void insertBeginning(int val) {
    Node* newNode = new Node;
    newNode->data = val;
    newNode->next = head; 
    head = newNode;       
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
    insertBeginning(30);
    insertBeginning(20);
    insertBeginning(10);
    cout << "Linked List after insertion at beginning:\n";
    display();
}
