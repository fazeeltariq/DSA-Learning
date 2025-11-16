#include <iostream>
using namespace std;

int main() {
    int num, power;
    cout << "\nEnter a base: ";
    cin >> num;

    cout << "\nEnter a power: ";
    cin >> power;

    bool isnegative = false;
    if (power < 0) {
        power = -power;
        isnegative = true;
    }

    double ans = 1.0;
    int x = num;
    int binary=power;

    while (binary > 0) {
        if (binary%2==1) {
            ans *= x;
        }
        x *= x;
        binary/=2;
    }

    if (isnegative)
        cout << "\nThe answer is: " << (1.0 / ans);
    else
        cout << "\nThe answer is: " << ans;

    return 0;
}
