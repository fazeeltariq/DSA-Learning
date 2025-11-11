
#include<bits/stdc++.h>
using namespace std;

int findGCD(int a,int b){
    if(b==0) return a;
    if(a==0) return b;

    return findGCD(b,a%b);
}

signed main()
{
    int a,b;
    cin>>a>>b;
    int gcd=findGCD(a,b);
    cout<<"\nThe gcd is: "<<gcd;
}