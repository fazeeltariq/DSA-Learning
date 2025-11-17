#include <iostream>
using namespace std;

int sum1toN(int n)
{
    if (n == 0)
        return 0;
    
    return n+sum1toN(n-1);
}
int main()
{
    int n;
    cout << "\nEnter the number: ";
    cin >> n;
    int sum = sum1toN(n);
    cout<<sum;
    return 0;
}