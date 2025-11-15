#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Square year is a year that can be represented as sum of squares of 2 numbers
    // ex => 2025 => 20^2 + 25^2
    //       4900 => 70^2 + 0^2  
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        long long number = stoll(s);
        long long start = 0, end = sqrt(number);
        bool found = false;

        while (start <= end) {
            long long mid = (start + end) / 2;
            long long square = mid * mid;

            if (square == number) {
                cout << "\n" << 0 << " " << mid;
                found = true;
                break;
            } else if (square > number) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }

        if (!found)
            cout << "\n-1";
    }
    return 0;
}
