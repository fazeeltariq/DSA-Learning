#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

class CircularList{
    public:
    Node *head;
    Node *tail;

    CircularList(){
        head = tail = NULL;
    }

    void insertatHead(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
            return;
        }
        newNode->next = head;
        head = newNode;
        tail->next = head;
    }
    void insertatTail(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            tail->next = head;
            return;
        }
        newNode->next = head;
        tail->next = newNode;
        tail = newNode;
    }

   void deleteAtHead() {
    if (head == NULL) {
        cout << "\nLinked list is empty";
        return;
    }
    Node* temp = head;

    if (head == tail) {
        head = tail = NULL;
    } else
    {
        head = head->next;
        tail->next = head;
    }
    delete temp;
    }

    void deleteatTail(){
        if (head == NULL) {
        cout << "\nLinked list is empty";
        return;
    }
   
    if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
    } 
  
        Node* temp = head;   
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = head;
        
    }

    void print() {
    if (head == NULL) {
        cout << "\nList is empty\n";
        return;
    }

    Node *temp = head;
    do 
    {
        cout << temp->data << " => ";
        temp = temp->next;
    } while (temp != head);

    cout << "(back to head)\n";
}

};
int main()
{
   return 0;
}