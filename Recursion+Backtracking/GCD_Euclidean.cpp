#include <iostream>
using namespace std;

int GCD(int a,int b){
    if(b==0) return a;
    if(a==0) return b;

    return GCD(b,a%b);
}

int main()
{
    int num1,num2;
    cout<<"\nEnter number 1: ";
    cin>>num1;
    cout<<"\nEnter number 2: ";
    cin>>num2;

    int gcd=GCD(num1,num2);
    cout<<"\nThe GCD of "<<num1<<" and "<<num2<<" is: "<<gcd;
    return 0;
}