#include <iostream>
#include <iomanip>
using namespace std;

double squareRoot(long long n, int precision = 6) {
    long long st = 0, end = n;
    double ans = 0.0;

    while (st <= end) {
        long long mid = st + (end - st) / 2;
        if (mid * mid <= n) {
            ans = mid;
            st = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    double inc = 0.1;
    for (int i = 0; i < precision; i++) {
        while (ans * ans <= n) {
            ans += inc;
        }
        ans -= inc;
        inc /= 10;
    }

    return ans;
}

int main() {
    long long n;
    cin >> n;
    double result = squareRoot(n);
    cout << fixed << setprecision(6);
    cout << "Exact sqrt(" << n << ") = " << result << endl;
    return 0;
}
