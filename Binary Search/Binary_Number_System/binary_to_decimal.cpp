#include <iostream>
using namespace std;
int main()
{
    int number;
    cout<<"\nEnter a binary number: ";
    cin>>number;
    int result=0,base=1;
    while(number>0){
    int r=number%10;
    number=number/10;
    result=result+(r*base);
    base*=2;
    }
    cout<<"\nThe result is: "<<result;
    return 0;
}