#include <bits/stdc++.h>
using namespace std;

void subset(vector<int>& vec, int currentsize, vector<vector<int>>& allSubsets, vector<int>& ans) {
    if (currentsize == vec.size()) {
        allSubsets.push_back(ans);
        return;
    }

    ans.push_back(vec[currentsize]);
    subset(vec, currentsize + 1, allSubsets, ans);

    ans.pop_back();
    subset(vec, currentsize + 1, allSubsets, ans);
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<vector<int>> allSubsets;
    vector<int> ans;

    subset(vec, 0, allSubsets, ans);

    
    for (const auto& rows : allSubsets) {
        cout << "{ ";
        for (int val : rows) {
            cout << val << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
