#include<bits/stdc++.h>
using namespace std;

int countsteps( int n , int count = 0)
{
    if(n == 0)  return count;
    if (n%2 == 0)
    {
        countsteps (n/2 , count+1);
    }
    else
    {
        countsteps (n-1, count+1);
    }
}
int main()
{
    int n;
    cin >> n;
    int steps = countsteps (n);
    cout << "\nThe number of steps are: "<<steps;
   return 0;
}