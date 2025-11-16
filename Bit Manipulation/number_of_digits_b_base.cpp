#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n = 13;
    int base = 2;

    int digits = floor(log(n) / log(base)) + 1;

    cout << "Number of digits in base " << base << ": " << digits << endl;
    return 0;
}
