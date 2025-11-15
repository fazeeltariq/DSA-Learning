#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int start, int end, int target) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {-1, 2, 3, 5, 8, 12, 13, 15, 22, 33, 243, 245, 444, 555, 557};
    int target = 444;

    int start = 0;
    int end = 1;


    while (end < arr.size() && arr[end] < target) {
        start = end;
        end *= 2;

        if (end >= arr.size()) {
            end = arr.size() - 1;
            break;
        }
    }

    int result = binarySearch(arr, start, end, target);

    if (result != -1)
        cout << "The target " << target << " is at index: " << result << endl;
    else
        cout << "Target not found!" << endl;

    return 0;
}
