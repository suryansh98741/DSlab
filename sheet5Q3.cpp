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

void findMiddle() {
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "Middle Element: " << slow->data << endl;
}

int main() {
    for (int i = 1; i <= 5; i++) insertEnd(i);
    findMiddle();
}
