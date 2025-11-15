#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isminimum(vector<int> vec, int m, int k, int minimumdays) {
        int count = 0, a = 0;
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] <= minimumdays) {
                a++;
                if (a == k) {
                    count++;
                    a = 0;
                }
            } else {
                a = 0;
            }
        }
        return count >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if (m * k > bloomDay.size())
            return -1;

        int st = 1;
        int end = *max_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;

        while (st <= end) {
            int minpossible = st + (end - st) / 2;
            if (isminimum(bloomDay, m, k, minpossible)) {
                ans = minpossible;
                end = minpossible - 1;
            } else {
                st = minpossible + 1; 
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> bloomDay = {1,10,3,10,2}; 
    int m = 3, k = 1;

    int result = s.minDays(bloomDay, m, k);
    cout << "Output: " << result << endl;

    return 0;
}