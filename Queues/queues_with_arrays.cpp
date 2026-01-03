#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    int front;
    int rear;
    int capacity;
    int *arr;

public:
    Queue(int size) {
        front = 0;
        rear = -1;
        capacity = size;
        arr = new int[size];
    }

    void enqueue(int val) {
        if (rear == capacity - 1) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        arr[++rear] = val;
    }

    void dequeue() {
        if (front > rear) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        cout << "Dequeued: " << arr[front++] << endl;
    }

    void display() {
        if (front > rear) {
            cout << "Queue is Empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    return 0;
}
