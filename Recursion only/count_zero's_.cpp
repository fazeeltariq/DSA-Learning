#include<bits/stdc++.h>
using namespace std;

int zeros (int n, int count = 0)
{
    if(n==0) return count;
    if(n%10 == 0) count++;
    zeros(n/10, count);
}
int main()
{
    int n;
    cin>>n;
    int count = zeros(n);
    cout << "\nThe numbber of zero's are: "<<count;
   return 0;
}