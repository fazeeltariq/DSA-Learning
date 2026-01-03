#include<bits/stdc++.h>
using namespace std;

void reverse (queue<int> &q, int k) {
    stack <int> s;
    for (int i = 0; i < k; i++)
    {
        s.push (q.front());
        q.pop();
    }
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    int t = q.size()-k;
    while (t--)
    {
        q.push(q.front());
        q.pop();
    }

}

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k = 3;
    
    reverse (q,k);
    cout << "Queue after reversing first " << k << " elements:\n";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
   return 0;
}
  