#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node *next;
    Node (int val) {
        data = val;
        next = NULL;
    }
};

class Queue {
    public:
    Node *front;
    Node *rear;
    Queue () {
        front = rear = NULL;
    }

    void enqueue (int val) {
        Node *newNode = new Node (val);

        if(front == NULL) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    void dequeue () {
        if(front == NULL) return;

        cout << "Dequeued: " << front->data << endl;
        Node *temp = front;
        front = front->next;

        if (front == nullptr)
            rear = nullptr;

        delete temp;
    }

    void display () {
        if (front == NULL) cout << "\nEmpty queue: ";

        cout << "Queue elements: ";
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    ~Queue () {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

};
int main()
{
    Queue q;
    q.enqueue (1);
    q.enqueue (2);
    q.enqueue (3);
    q.enqueue (4);

    q.display();

    q.dequeue();
    
    q.display();
   return 0;
}