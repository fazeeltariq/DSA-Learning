#include <bits/stdc++.h>
using namespace std;

int main() {
    // Multimap allows duplicate keys
    multimap<int, int> m;

    m.insert({1, 3});
    m.insert({2, 4});
    m.insert({1, 55}); // Another value for key 1

    for (auto &it : m) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}
