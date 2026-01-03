#include<bits/stdc++.h>
using namespace std;

class Stack {
    int *arr;
    int top;
    int capacity;
    public:
    Stack (int size) {
        arr = new int[size];
        top = -1;
        capacity = size;
    }
    ~Stack ( ){
        delete[] arr;
    }
    void push (int val) {
        if (top == capacity - 1) {
            cout << "\nStackOverflow cannot push: ";
            return ;
        }
        arr[++top] = val;
    }

    void pop (int val) {
        if (top == -1) {
            cout << "\nStackUnderflow cannot pop: ";
            return ;
        }
        top--;
    }
    int top () {
        if (top == -1) {
            cout << "\nStact is empty: ";
            return;
        }
        return arr[top];
    }

    bool isempty () {
        return top == -1;
    }

    void display () {
        if (top == -1) {
            cout << "\nStack is Empty!\n";
            return;
        }
        cout << "\nStack elements: ";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
            
        cout << endl;

    }
};

int main()
{
   return 0;
}