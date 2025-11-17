#include<bits/stdc++.h>
using namespace std;
int main()
{
    // same as reverse 
    int n;
    cin>>n;
    int temp = n;
    int rev = 0;
    while (temp>0)
    {
        int r = temp % 10;
        rev = rev*10 + r;
        temp = temp / 10;
    }
    if(rev == n)
    {
        cout << "\nPalidrome: ";
    }
    else{
        cout << "\nNot Palindrome: ";
    }
   return 0;
}