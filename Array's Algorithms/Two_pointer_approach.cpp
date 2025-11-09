#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec;
    int n;
    cout << "\nEnter the size: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end());

    int target;
    cout << "\nEnter target: ";
    cin >> target;

    int first = 0, last = vec.size() - 1;

    while (first < last) {
        int sum = vec[first] + vec[last];
        if (sum == target) {
            cout << "\nFound at " << first << " and " << last;
            return 0;
        } else if (sum > target) {
            last--;
        } else {
            first++;
        }
    }

    cout << "\nNot Found";
    return 0;
}
