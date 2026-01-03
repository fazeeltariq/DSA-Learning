// C++ program to add one to a linked list

#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       	data = x;
        next = nullptr;
    }
};

int carry (Node *head){
    if( head == NULL) return 1;

    int cary = carry(head->next);
    int sum = head->data + cary;
    head->data = sum % 10;
    cary = sum / 10;
    return cary;
}

Node *addOne(Node *head) {
   int cary = carry(head);
   if (cary > 0) {
       Node *newNode = new Node(cary);
       newNode->next = head;
       head = newNode;
   }
   return head;
}


void printList(Node *head) {
    Node *curr = head;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
  
  	// Create a hard-coded linked list:
    // 1 -> 9 -> 9 -> 9
    Node *head = new Node(1);
    head->next = new Node(9);
    head->next->next = new Node(9);
    head->next->next->next = new Node(9);
  
    head = addOne(head);

    printList(head);

    return 0;
}