#include <iostream>
using namespace std;

void print(int n,int a){
    if(a>n){
        return;
    }
    cout<<a<<"\n";
    print(n,a+1);
}
int main()
{
    int n;
    cin>>n;
    print(n,1);
    return 0;
}