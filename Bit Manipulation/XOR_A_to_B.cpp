#include <bits/stdc++.h>
using namespace std;


int xorUpto(int n) {
    if (n % 4 == 0) return n;
    else if (n % 4 == 1) return 1;
    else if (n % 4 == 2) return n + 1;
    else return 0;
}

int main() {
    int a, b;
    cin >> a >> b;

    int xor_b = xorUpto(b);
    int xor_a_minus_1 = xorUpto(a - 1);
    
    int final_result = xor_b ^ xor_a_minus_1;

    cout << "\nXOR from " << a << " to " << b << " is: " << final_result << endl;

    return 0;
}
