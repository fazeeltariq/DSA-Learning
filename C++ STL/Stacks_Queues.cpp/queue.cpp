#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(112);
    q.push(3);
    q.push(-9);

    while(!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

   return 0;
}