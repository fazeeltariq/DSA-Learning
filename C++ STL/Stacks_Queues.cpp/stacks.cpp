#include<bits/stdc++.h>
using namespace std;
int main()
{
    // LIFO => Last in First Out
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(1);
    s.push(10);

    while(!s.empty())
    {
        cout << s.top() <<endl;
        s.pop();
    }
    return 0;
}