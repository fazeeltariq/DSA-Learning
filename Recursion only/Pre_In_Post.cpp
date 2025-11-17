#include <iostream>
using namespace std;

void preInPost(int n){
    if(n==0) return;
    cout<<"\nPre: "<<n;
    preInPost(n-1);
    cout<<"\nIn: "<<n;
    preInPost(n-1);
    cout<<"\nPost: "<<n;
    return;
}
int main()
{
    int n;
    cout<<"\nEnter a number: ";
    cin>>n;

    preInPost(n);

    return 0;
}