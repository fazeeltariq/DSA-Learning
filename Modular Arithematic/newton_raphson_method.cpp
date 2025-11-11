#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calcSqrt(double n) {
    if (n < 0) {
        cerr << "Cannot compute square root of a negative number.\n";
        return -1;
    }
    if (n == 0 || n == 1) return n;

    double x = n;
    double root;
    while (true) {
        root = 0.5 * (x + n / x);
        
        if (abs(root - x) < 1e-9)
            break;
        x = root;
    }
    return root;
}
int main() {
    double n;
    cout << "Enter a number: ";
    cin >> n;
    double result = calcSqrt(n);
    if (result != -1)
        cout << fixed << setprecision(8) << "\nSquare Root is: " << result << endl;

    return 0;
}
