#include <iostream>
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

    void push_front(int value){
      
        Node *newNode = new Node(value);

        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode->nextNode = head;    // beacuse head is pointing to first element, but now newNode is first element.
            head = newNode;
        }
    }
    void push_back(int value){
        
        Node *newNode = new Node(value);
        if(head == NULL){
            head = tail = newNode;
            return;
        }else{
            tail->nextNode = newNode;

            tail = newNode;
        }

    }

    void pop_front(){
        
        if(head == NULL){
            cout << "\nEmpty Linked list.";
        }
        else{
        Node *temp = head;
        head = head->nextNode;
        temp->nextNode = NULL;
        delete temp;
        }
    }
    void pop_back(){
       
        if(head == NULL){
            return;
        }
        if (head == tail) {
        delete head;
        head = tail = NULL;
        return;
        }
        Node *temp = head;
        while (temp->nextNode!=tail)
        {
            temp = temp->nextNode;
        }
        temp->nextNode = NULL;
        delete tail;
        tail = temp;
    }

    void print(){
        Node *temp = head;
        while (temp!=NULL)
        {
            cout<<temp->data<<endl;
            temp = temp->nextNode;
        }
    }

    void insert(int value, int position) {
    if (position < 0) {
        return;
    }
    if (position == 0) {
        push_front(value);
        return;  
    }

    Node* newNode = new Node(value);
    Node* temp = head;
    int pos = position - 1;

    while (pos--) {
        if (temp == NULL) return; 
        
        temp = temp->nextNode;
    }

    newNode->nextNode = temp->nextNode;
    temp->nextNode = newNode;

    if (newNode->nextNode == NULL) {
        tail = newNode;
    }
    }

    int search(int value){
        Node *temp = head;
        int index = 0;
        while (temp!=NULL)
        {
            if(temp->data == value){
                return index;
            }
            temp = temp->nextNode;
            index++;
        } 
        return -1;
    }

};

int main()
{
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);
    ll.pop_front();
    ll.print();
    return 0;
}