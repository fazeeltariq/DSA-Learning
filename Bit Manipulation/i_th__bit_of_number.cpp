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
    
    if (n & mask)
        cout << "\nBit " << bitNo + 1 << " is: 1 (set)";
    else
        cout << "\nBit " << bitNo + 1 << " is: 0 (not set)";

    return 0;
}
