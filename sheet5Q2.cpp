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

int deleteAll(int key) {
    int count = 0;
    while (head && head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        count++;
    }
    Node* curr = head;
    while (curr && curr->next) {
        if (curr->next->data == key) {
            Node* temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
            count++;
        } else curr = curr->next;
    }
    return count;
}

void display() {
    Node* temp = head;
    while (temp) { cout << temp->data << "->"; temp = temp->next; }
    cout << "NULL\n";
}

int main() {
    int arr[] = {1,2,1,2,1,3,1};
    for (int x : arr) insertEnd(x);
    int count = deleteAll(1);
    cout << "Count: " << count << endl;
    cout << "Updated Linked List: ";
    display();
}
