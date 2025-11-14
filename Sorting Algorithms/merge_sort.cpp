#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int start, int end)
{
    vector<int> temp;
    int mid = start + (end - start) / 2;
    int m = mid + 1, s = start;

    while (s <= mid && m <= end)
    {
        if (arr[s] <= arr[m])
        {
            temp.push_back(arr[s++]);
        }
        else
        {
            temp.push_back(arr[m++]);
        }
    }

    while (s <= mid)
    {
        temp.push_back(arr[s++]);
    }

    while (m <= end)
    {
        temp.push_back(arr[m++]);
    }

    for (int i = 0; i < temp.size(); i++)
    {
        arr[start + i] = temp[i];
    }
}

void mergesort(vector<int> &arr, int st, int en)
{
    if (st >= en)
    {
        return;
    }

    int mid = (st + en) / 2;
    mergesort(arr, st, mid);
    mergesort(arr, mid + 1, en);
    merge(arr, st, en);
}

int main()
{
    vector<int> arr = {3, 1, 4, 5, 2};
    int size = 5;
    mergesort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}