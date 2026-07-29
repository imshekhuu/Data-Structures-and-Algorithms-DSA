// 328. Odd Even Linked List

// Given the head of a singly linked list, group all the nodes with odd indices together followed by the nodes with even indices, and return the reordered list.

// The first node is considered odd, and the second node is even, and so on.

// Note that the relative order inside both the even and odd groups should remain as it was in the input.

// You must solve the problem in O(1) extra space complexity and O(n) time complexity.


// Input: head = [1,2,3,4,5]
// Output: [1,3,5,2,4]
// Example 2:


// Input: head = [2,1,3,5,6,4,7]
// Output: [2,3,6,7,1,5,4]


#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

void insertAtTail(Node* &head, int val){

    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
    }

    Node* curr = head;

    while(curr != NULL){
        curr = curr -> next;
    }

    curr -> next = newNode;
}

void print(Node* &head){

    Node* curr = head;

    while(curr != NULL){
        cout << curr -> data << " ";
        curr = curr -> next;
    }
}

Node* oddEvenList(Node* head){

    Node* odd = head;
    Node* even = head -> next;
    Node* evenhead = even;

    while(even != NULL && even -> next != NULL){
        odd -> next = even ->next;
        odd = odd -> next;

        even -> next = odd -> next;
        even = even -> next;
    }

    odd -> next = evenhead;

    return head;
}

int main(int argc, char const *argv[])
{
        Node* head = nullptr;

    // Input: 1 2 3 4 5
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);

    cout << "Original List: ";
    print(head);

    head = oddEvenList(head);

    cout << "Modified List: ";
    print(head);


    return 0;
}
