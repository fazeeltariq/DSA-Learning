#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    char data;
    Node* next;
    Node(char val) {
        data = val;
        next = NULL;
    }
};

class Stack {
public:
    Node* top;
    Stack() {
        top = nullptr;
    }

    void push(char value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (empty()) {
            cout << "Stack underflow! No element.\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    bool empty() {
        return top == NULL;
    }

    char peek() {
        if (empty())
            return ' ';
        return top->data;
    }
};

bool isOperator(char opera) {
    return (opera == '+' || opera == '-' || opera == '*' || opera == '/' || opera == '^');
}

int precedence(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

string infixToPrefix(string infix) {
    string ans;
    Stack s;

    reverse(infix.begin(), infix.end());

    // Fix brackets
    for (int i = 0; i < infix.length(); i++) {
        if (infix[i] == ')')
            infix[i] = '(';
        else if (infix[i] == '(')
            infix[i] = ')';
    }

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            ans += ch;
        } 
        else if (ch == '(') {
            s.push(ch);
        } 
        else if (ch == ')') {
            while (!s.empty() && s.peek() != '(') {
                ans += s.peek();
                s.pop();
            }
            if (!s.empty())
                s.pop();
        } 
        else if (isOperator(ch)) {
            while (!s.empty() && precedence(ch) < precedence(s.peek())) {
                ans += s.peek();
                s.pop();
            }
            s.push(ch);
        }
    }

    while (!s.empty()) {
        ans += s.peek();
        s.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string infix = "a+b-(c-d+e)^(f^g^h)-i";
    string prefix = infixToPrefix(infix);
    cout << "Prefix: " << prefix << endl;
    return 0;
}
