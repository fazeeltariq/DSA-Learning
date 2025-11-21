#include <iostream>
using namespace std;

int noofways(int n){
    if(n==0 ) return 1;
    if(n==1) return 1;
    if(n==2) return 2;
    return noofways(n-1)+noofways(n-2)+noofways(n-3);
}

int main()
{
    int laststair;
    cout<<"\nEnter the last stair: ";
    cin>>laststair;

    int totalways=noofways(laststair);
    cout<<"\nThe total ways are: "<<totalways;
    return 0;
}