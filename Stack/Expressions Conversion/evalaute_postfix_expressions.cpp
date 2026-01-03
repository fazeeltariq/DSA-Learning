#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

bool isoperator(char opera) {
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

string infixToPostfix(string infix) {
    string ans;
    stack<char> s;

    for (int i = 0; i < infix.length(); i++) {
        char ch = infix[i];

        if (isalnum(ch)) {  
            ans += ch;
        } 
        else if (ch == '(') {
            s.push(ch);
        } 
        else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                ans += s.top();
                s.pop();
            }
            if (!s.empty())
                s.pop();
        } 
        else if (isoperator(ch)) {
            while (!s.empty() && precedence(ch) <= precedence(s.top())) {
                ans += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }

    while (!s.empty()) {
        ans += s.top();
        s.pop();
    }

    return ans;
}

int applyOperation(int op1, int op2, char ch) {
    if (ch == '+') return op1 + op2;
    else if (ch == '-') return op1 - op2;
    else if (ch == '*') return op1 * op2;
    else if (ch == '/') return op1 / op2;
    else if (ch == '^') return pow(op1, op2);
    else return 0;
}

int evaluatePostfix(string postfix) {
    stack<int> s;
    for (int i = 0; i < postfix.length(); i++) {
        char ch = postfix[i];

        if (isdigit(ch)) {
            s.push(ch - '0');
        } else if (isoperator(ch)) {
            int op2 = s.top(); s.pop();
            int op1 = s.top(); s.pop();
            int result = applyOperation(op1, op2, ch);
            s.push(result);
        }
    }
    return s.top();
}

int main() {
    string infix = "2+3*(3^2-1)-(5+1*2)-2";
    string postfix = infixToPostfix(infix);

    cout << "Postfix: " << postfix << endl;
    cout << "Result: " << evaluatePostfix(postfix) << endl;

    return 0;
}
