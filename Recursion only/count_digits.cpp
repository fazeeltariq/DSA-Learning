#include<iostream>
using namespace std;

int count_digits(int number){
    if(number==0){
        return 0;
    }
    int count=count_digits(number/10);
    count++;
    return count;
}
int main()
{
    int number;
    cout<<"\nEnter a number: ";
    cin>>number;

    int count=count_digits(number);
    cout<<"\nThe total digits are: "<<count;
    return 0;
}