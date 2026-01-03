#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
   vector<int> data;

public:
    void push(int val) {
      data.push_back(val);
    }

    void pop() {
        if (!data.empty()) {
         data.pop_back();
         } 
        else {
            cout << "Stack underflow!\n";
        }
    }

    int top() {
        if (!data.empty()) {
            return data.back(); // same as data[data.size()-1]
        } 
        else {
            throw out_of_range("Stack is empty!");
        }
    }

    bool empty() {
        return data.empty();
    }

    int size() {
        return data.size();
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
