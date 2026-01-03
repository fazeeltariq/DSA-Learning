#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node *nextNode;

    Node(int data)
    {
        this->data = data;
        nextNode = NULL;
    }

};
class List
{
private:
    Node *head;
    Node *tail;
    int size;
public:
    List()
    {
        head = tail = NULL;
        size=0;
    }
    Node* reverseList(Node* head) {
        
    Node* previous = NULL;
    Node* current = head;

    while (current != NULL) {
        Node* next = current->nextNode;
        current->nextNode = previous;
        previous = current;
        current = next;
    }

    return previous; 
    }

};


int main()
{

   return 0;
}