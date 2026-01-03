#include<bits/stdc++.h>
using namespace std;

void deleteMiddle (stack<int> &s, int cr, int size) {
    if (cr == size/2 ) {
        s.pop();
        return;
    }

    int current = s.top();
    s.pop();
    deleteMiddle(s,cr+1, size);
    s.push(current);   
}

void sort_stack (stack<int> &s, int size) {
    int first = -1, second = -1;
    for (int i = 0; i < size-1; i++)
    {
           
    }
    
}


int main()
{
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);

    deleteMiddle(s,0,5);
    
    cout << "Stack after deleting middle element:\n";
    while (!s.empty()) {
        cout << s.top() << "\n";
        s.pop();
    }

   return 0;
}