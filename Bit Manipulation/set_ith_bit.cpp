#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int bitno;
    cin>>bitno;     
    // bitno--;
    
    // int mask= 1 << bitno; 
    // n = n | mask;

    n = n | (1 << bitno-1);

   cout<<"\nThe i-th bit is set: "<<n;
   return 0;
}