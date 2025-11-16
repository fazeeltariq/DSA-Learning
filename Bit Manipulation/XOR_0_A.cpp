#include<bits/stdc++.h>
using namespace std;

int main()
{
    // XOR of all numbers from 0 to A
    int a;
    cin >> a;

    if (a % 4 == 0) {
        cout << a;
    }
    else if (a % 4 == 1) {
        cout << 1;
    }
    else if (a % 4 == 2) {
        cout << a + 1;
    }
    else { 
        cout << 0;
    }

    return 0;
}
