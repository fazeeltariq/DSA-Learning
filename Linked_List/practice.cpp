#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

class List {
private:
    Node *head;
    Node *tail;

public:
    List() {
        head = tail = NULL;
    }

   ~List() {
    deleteList();
    }


    bool isEmpty() {
        return head == NULL;
    }

    void push_front(int data) {
        Node *newNode = new Node(data);
        if (isEmpty()) 
        {
            head = tail = newNode;
        } 
        else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int data) {
        Node *newNode = new Node(data);
        if (isEmpty()) {
            head = tail = newNode;
        } 
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if (isEmpty()) {
            cout << "Empty list\n";
            return;
        }
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    void pop_back() {
        if (isEmpty()) {
            cout << "Empty list\n";
            return;
        }
        if (head == tail) 
        {
            delete head;
            head = tail = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next->next != NULL) 
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = NULL;
    }

    void print() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    void insert(int data, int position) {
        if (position < 0) return;
        if (position == 0) {
            push_front(data);
            return;
        }
        Node *temp = head;
        int pos = position - 1;

        while (pos--) {
            if (temp == NULL) return; 
            temp = temp->next;
        }
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;

        if (newNode->next == NULL) tail = newNode;
    }

    int search(int value) {
        if (isEmpty()) {
            cout << "Empty list\n";
            return -1;
        }
        Node *temp = head;
        int count = 0;
        while (temp != NULL) {
            if (temp->data == value) {
                return count;
            }
            temp = temp->next;
            count++;
        }
        return -1; 
    }
    int length(){
        Node *temp = head;
        int count = 0;
        while (temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        return count;
    }

    void reverselist(){
        Node *prev = NULL;
        Node *curr = head;

        tail = head;
        while (curr != NULL)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void deleteNode (int position){
        if (position < 0 || position >= length()) return;

        if(position == 0){
            pop_front();
            return;
        }
        else if (position == length()-1){
            pop_back();
            return;
        }
        Node *temp = head;

        for (int i = 0; i < position - 1; i++) {
            if (temp == NULL) return; 

            temp= temp->next;
        }
        Node *temp2 = temp->next;
        temp->next = temp2->next;
        delete temp2;
    }
    void deleteList(){
        if(isEmpty()) return;
        
        Node *temp = head;
        while (temp!=NULL)
        {
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
        head = tail = NULL;
    }
};

int main() {
    List l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.insert(15, 1);
    l.print(); 
    cout << "Position of 20: " << l.search(20) << endl; 
    l.reverselist();
    l.print();
    l.deleteNode(1);
    // l.pop_front();
    // l.pop_back();
    l.print();
}
