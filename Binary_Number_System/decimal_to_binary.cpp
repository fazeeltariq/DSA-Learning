#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"\nEnter the number: ";
    cin>>number;
    int result=0;
    int re;
    int base=1;
    while(number>0){
    re=number%2;
    number/=2;
    result=result+(re*base);
    base*=10;
    }

    cout<<"\nThe result is: "<<result;
    return 0;
}