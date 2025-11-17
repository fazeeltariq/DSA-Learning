#include<iostream>
using namespace std;

long long int factorial(long long int n){
    if(n==1 || n==0){
        return 1;
    }
    if(n<0){
        cout<<"\nWrong number returning zero: ";
        return 0;
    }
    return n*factorial(n-1);
}

int main()
{
    long long int n;
    cout<<"\nEnter the number: ";
    cin>>n;
    long long int fact=factorial(n);
    cout<<"\n"<<fact;
    return 0;
}