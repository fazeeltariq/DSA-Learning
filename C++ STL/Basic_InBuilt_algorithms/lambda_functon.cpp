#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout << [](int x, int y) { return x+y; } (2,3) << endl;

    auto sum =  [](int x, int y) { return x+y; } ; // for reusing assiging

    cout << sum(3,4) <<endl;

     vector<int> vec = {1, 2, 3, 4, 5};

    // 1. all_of example — check if all elements are > 0
    bool allPositive = all_of(vec.begin(), vec.end(), [](int x) {
        return x > 0;
    });
    cout << "All elements are positive? " << (allPositive ? "Yes" : "No") << endl;

    // 2. any_of example — check if any element is even
    bool hasEven = any_of(vec.begin(), vec.end(), [](int x) {
        return x % 2 == 0;
    });
    cout << "Any element is even? " << (hasEven ? "Yes" : "No") << endl;

    // 3. none_of example — check if no element is negative
    bool noNegative = none_of(vec.begin(), vec.end(), [](int x) {
        return x < 0;
    });
    cout << "No elements are negative? " << (noNegative ? "Yes" : "No") << endl;

    return 0;



   return 0;
}