#include<bits/stdc++.h>
using namespace std;

// log ((b))
int power(int a, int b) {
    int result = 1;

    while(b>0){
        if(b & 1 == 1){
            result *= a;
        }
        a = a*a;
        b = b >> 1;
    }
    return result;
}


int main()
{

    int a;
    int b;
    cin>>a;
    cin>>b;
    cout<<power(a,b);
   return 0;
}