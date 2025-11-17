#include<bits/stdc++.h>
using namespace std;

int reverse_number (int number , int rev = 0)
{
    if (number == 0) return rev;
    return reverse_number(number / 10, rev*10 + number%10);
}
int main()
{
    int n;
    cin>>n;
    int reve = reverse_number(n);
    
    cout<<reve;
    
    
    
   return 0;
}