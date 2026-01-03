#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data){
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};
class DoublyList{
    public:
    Node *head;
    Node *tail;

    DoublyList(){
        head = tail = NULL;
    }

    void push_front(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head  = tail = newNode;
            return;
        }
        else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int val){
        Node *newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
           newNode->prev = tail; 
           tail->next = newNode;
           tail = newNode;
        }
    }

    void pop_front(){
        if (head == NULL){
            cout << "\nList in empty: ";
            return;
        }
        Node *temp = head;
        
        if(head == tail){
            head = tail = NULL;
        }
        else{
            head = head->next;
            head->prev = NULL;
        }
        delete temp;
    }

    void pop_back() {
    if (head == NULL) {
        cout << "\nList is empty.";
        return;
    }
    Node* temp = tail;  

    if (head == tail) {  
        head = tail = NULL;
    } else {
        tail = tail->prev;  
        tail->next = NULL;  
    }
    delete temp; 
    }


    void print(){
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <==> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

};

int main()
{
    DoublyList dll;
    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);

    dll.print();
    return 0;
}