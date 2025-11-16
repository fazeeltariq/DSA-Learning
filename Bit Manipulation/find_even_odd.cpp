#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if((n&1) == 0) cout<<"Even:";   // bracket because == has more precedence than &
    else cout<<"Odd:";
   return 0;
}