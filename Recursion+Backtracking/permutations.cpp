#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<int>& nums, vector<bool>& used, vector<int>& path, vector<vector<int>>& result) {
    
    if (path.size() == nums.size()) {
        result.push_back(path);
        return;
    }

    for (int i = 0; i < nums.size(); ++i) {
        if (used[i]) continue;

        path.push_back(nums[i]);
        used[i] = true;

        backtrack(nums, used, path, result);

        path.pop_back();
        used[i] = false;
    }
}

vector<vector<int>> permuteArray(vector<int>& nums) {
    vector<vector<int>> result;
    vector<int> path;
    vector<bool> used(nums.size(), false);

    backtrack(nums, used, path, result);
    return result;
}
int main()
{
    // you can make your own test cases
    vector<int> vec = {1,2,3};
    vector<vector<int>> permutations = permuteArray(vec);
    for (int i = 0; i < permutations.size(); i++)
    {
        for (int j = 0; j < permutations[0].size(); j++)
        {
            cout<<permutations[i][j];
        }
        cout<<"\n";
    }
    
}
