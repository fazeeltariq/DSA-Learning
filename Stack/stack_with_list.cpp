#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    list<int> ll;

public:
    void push(int val) {
        ll.push_back(val);
    }

    void pop() {
        if (!ll.empty()) {
            ll.pop_back();
        } else {
            cout << "Stack underflow!\n";
        }
    }

    int top() {
        if (!ll.empty()) {
            return ll.back();
        } else {
            throw out_of_range("Stack is empty!");
        }
    }

    bool empty() {
        return ll.empty();
    }

    int size() {
        return ll.size();
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Top element: " << st.top() << endl; 
    st.pop();
    cout << "Top element after pop: " << st.top() << endl; 

    return 0;
}
