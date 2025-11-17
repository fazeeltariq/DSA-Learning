#include <iostream>
using namespace std;


int power(int a, int b) {
    // if (b == 0) return 1;
    // if (b == 1) return a;

    // int half = power(a, b / 2); // Only one call 

    // if (b % 2 == 0)
    //     return half * half;
    // else
    //     return half * half * a;
}

int main()
{
    int a,b;
    cout<<"\nEnter the base: ";
    cin>>a;
    cout<<"\nEnter the power: ";
    cin>>b;

    int p=power(a,b);
    cout<<"\nThe "<<a<<" raised to power "<<b<<" is : "<<p;
    return 0;
}