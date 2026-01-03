#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    char data;
    Node *next;
    Node(char val){
        data = val;
        next = NULL;
    }
};

class Stack{
public:
    Node *top;
    Stack(){
        top = nullptr;
    }
    void push(char value){
        Node *newNode = new Node(value);
        if (top == NULL){
            top = newNode;
            return;
        }
        newNode->next = top;
        top = newNode;
    }

    void pop(){
        if (empty()) {
            cout << "Stack underflow! No element: \n";
            return;
        }
        Node *temp = top;
        top = top->next;
        temp->next = NULL;
        delete temp;
        temp = NULL;
    }
    bool empty(){
        return top == NULL;
    }
    char peek(){
        if (empty())
            return ' ';
        return top->data;
    }
};

double op(double a, double b, char c){
    if (c == '+')
        return a + b;
    if (c == '-')
        return a - b;
    if (c == '*')
        return a * b;
    if (c == '/')
        return a / b;
    return 0;
}

int pr(char c){
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    return 0;
}

double eval(string s) {
    stack<double> val;
    stack<char> st;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == ' ')
            continue;
        if (isdigit(s[i]) || s[i] == '.') {
            string tmp;
            while (i < s.size() && (isdigit(s[i]) || s[i] == '.')) {
                tmp += s[i];
                i++;
            }
            val.push(stod(tmp));
            i--;
        }
        else if (s[i] == '(') {
            st.push('(');
        }

        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '('){
                double y = val.top();
                val.pop();
                double x = val.top();
                val.pop();
                char c = st.top();
                st.pop();
                val.push(op(x, y, c));
            }
            if (!st.empty())
                st.pop();
        }

        else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){

            while (!st.empty() && pr(st.top()) >= pr(s[i])){
                double y = val.top();
                val.pop();
                double x = val.top();
                val.pop();
                char c = st.top();
                st.pop();
                val.push(op(x, y, c));
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()){
        double y = val.top();
        val.pop();
        double x = val.top();
        val.pop();
        char c = st.top();
        st.pop();
        val.push(op(x, y, c));
    }
    return val.top();
}

int main()
{

    string exp = "12+13-5*(0.5+0.5)";
    double result = eval(exp);

    Stack s;
    s.push('x');
    s.push('=');

    string resStr = to_string((int)result);
    for (char c : resStr)
        s.push(c);

    cout << endl;
    cout << "Result: " << result << endl;
    cout << endl;
    return 0;
}
