#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int a = (n & -n); // gives number which has only one set bit which is MSB 
    a = log2f(a);
    cout<<++a;
   return 0;
}