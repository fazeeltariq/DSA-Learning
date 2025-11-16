#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int base = 1;
    int no = 5;
    int sum = 0;
    for (int i = 1; i <= 32; i++)
    {
        if(n & (1<<(i-1))){
            sum = sum + no;
        }
        no = no*5;
    }
    cout<<"\nMagic number is: "<<sum;
   return 0;
}