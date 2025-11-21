#include<bits/stdc++.h>
using namespace std;

void print_triangle (int n , int i , int j)
{
    if( i == n-1) return;

   
    if( j == n-i)
    {
        cout <<"\n";
        i++;
        j = 0;
    }
    cout <<"*" << " ";

    print_triangle (n , i , j+1);
}
int main()
{
    int n;
    cin >> n;
    print_triangle (n , 0 , 0);
   return 0;
}