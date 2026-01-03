#include<bits/stdc++.h>
using namespace std;

// 1 2 3 4 5
// 5 4 3 2 1

void reverseQueue (queue<int> &q) {
    if (q.empty()) return;

    int current = q.front();
    q.pop();
    reverseQueue (q);
    q.push(current);
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

   
    reverseQueue (q);
    cout << "Queue after reversing:  ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
   return 0;
}