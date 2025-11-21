#include <iostream>
using namespace std;

void zizzag(int n){
    if(n==0) return;
    cout<<n<<" ";
    zizzag(n-1);
    cout<<n<<" ";
    zizzag(n-1);
    cout<<n<<" ";
    return;
}
int main()
{
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;

    zizzag(n);

    return 0;
}