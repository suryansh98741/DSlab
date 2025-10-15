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

void searchNode(int val) {
    Node* temp = head;
    int pos = 1;
    while (temp) {
        if (temp->data == val) {
            cout << "Node found at position: " << pos << endl;
            return;
        }
        temp = temp->next;
        pos++;
    }
    cout << "Node not found.\n";
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    searchNode(20);
}
