#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int bitNo;
    cin >> bitNo;

    bitNo--;
    
    int mask = 1 << bitNo;
    n = n ^ mask;
    cout<<n;

   return 0;
}

// get i-th bit
//  n = n & (1<<bit-1) > 0 bit is set else bit is 0 

// setting a bit

// n = n | (1 << (bit - 1));

// resetting a bit
// n = n & (~(1<<(bit-1)));

// get LSb bit
// (n&1)

// toggle a bit

// n = n ^ (1 << (bit - 1));

// int power(int a, int b) {
//     int result = 1;

//     while(b>0){
//         if(b & 1 == 1){
//             result *= a;
//         }
//         a = a*a;
//         b = b >> 1;
//     }
//     return result;
// }

// int digits = floor(log(n) / log(base)) + 1;

