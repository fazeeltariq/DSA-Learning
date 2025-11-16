#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"\nBefore swapping a = "<<a<<" b = "<<b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"\nAfter swapping a = "<<a<<" b = "<<b;
    return 0;
}