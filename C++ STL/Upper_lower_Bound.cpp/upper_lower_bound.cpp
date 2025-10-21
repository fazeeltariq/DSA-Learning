#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s.insert(a);
    }
    auto lowerbound = lower_bound(s.begin(), s.end(), 8);   // time complxity O(N).So do not use this way

    // In maps we can use upper and lower bounds only on keys
    auto lw = s.lower_bound(5); // O(log(N))


    // sort(v.begin(), v.end());

    // // lower_bound finds the first element >= target
    // auto lowerbound = lower_bound(v.begin(), v.end(), 8);

    // // upper_bound finds the first element > target
    // auto upperbound = upper_bound(v.begin(), v.end(), 5);

    // if (lowerbound != v.end())
    //     cout << "\nLower Bound is: " << *lowerbound;
    // else
    //     cout << "\nLower Bound not found";

    // if (upperbound != v.end())
    //     cout << "\nUpper Bound is: " << *upperbound;
    // else
    //     cout << "\nUpper Bound not found";

    return 0;
}
