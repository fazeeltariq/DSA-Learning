#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int bitno;
    cin>>bitno;
    bitno--;
    int mask = (1<<bitno);
    mask=~mask;
    n = n & mask;
    cout<<n;

   return 0;
}