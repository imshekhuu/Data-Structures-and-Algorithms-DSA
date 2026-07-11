#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Print Linked List
void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// ================= INSERTION =================

// Insert at Head
void insertHead(Node*& head, int value) {
    Node* newNode = new Node(value);

    newNode->next = head;
    head = newNode;
}

// Insert at End
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Insert at Position (1-based indexing)
void insertPos(Node*& head, int pos, int value) {

    if (pos <= 1) {
        insertHead(head, value);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    Node* newNode = new Node(value);

    newNode->next = temp->next;
    temp->next = newNode;
}

// ================= DELETION =================

// Delete Head
void deleteHead(Node*& head) {

    if (head == NULL)
        return;

    Node* temp = head;
    head = head->next;

    delete temp;
}

// Delete End
void deleteEnd(Node*& head) {

    if (head == NULL)
        return;

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* temp = head;

    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
}

// Delete at Position (1-based indexing)
void deletePos(Node*& head, int pos) {

    if (head == NULL)
        return;

    if (pos == 1) {
        deleteHead(head);
        return;
    }

    Node* temp = head;

    for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
        temp = temp->next;
    }

    if (temp->next == NULL)
        return;

    Node* del = temp->next;
    temp->next = del->next;

    delete del;
}

// ================= MAIN =================

int main() {

    Node* head = NULL;

    // Insert at End
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);

    cout << "Initial List: ";
    print(head);

    // Insert at Head
    insertHead(head, 5);
    cout << "After Insert Head: ";
    print(head);

    // Insert at Position
    insertPos(head, 3, 15);
    cout << "After Insert Position 3: ";
    print(head);

    // Delete Head
    deleteHead(head);
    cout << "After Delete Head: ";
    print(head);

    // Delete End
    deleteEnd(head);
    cout << "After Delete End: ";
    print(head);

    // Delete Position
    deletePos(head, 2);
    cout << "After Delete Position 2: ";
    print(head);

    return 0;
}