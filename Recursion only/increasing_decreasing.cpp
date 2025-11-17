#include<iostream>
using namespace std;

void print(int n){
    if(n==0) return;
    cout<<n<<"\n";
    print(n-1);
    cout<<n<<"\n";
    return;
}

int main()
{
    int n;
    cout<<"\nEnter the number: ";
    cin>>n;
    print(n);
    return 0;
}