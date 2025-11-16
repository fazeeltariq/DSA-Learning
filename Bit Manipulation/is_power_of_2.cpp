#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;


    if (n > 0 && (n & (n - 1)) == 0) {
        cout << "True: " << n << " is a power of 2\n";
    } else {
        cout << "False: " << n << " is NOT a power of 2\n";
    }

    return 0;
}
