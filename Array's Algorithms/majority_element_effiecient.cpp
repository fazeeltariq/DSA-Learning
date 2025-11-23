#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 2, 2, 2, 2, 3, 4, 2, 3};
    int n = 10;

    sort(arr, arr + n);

     // O(n) sol
     
    int fre = 1;
    int ele = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == ele)
        {
            fre++;
        }
        else
        {
            fre = 1;
            ele = arr[i];
        }

        if (fre > n / 2)
        {
            cout << arr[i] << " is the majority element.\n";
            return 0;
        }
    }
    cout << "No majority element.\n";
    return 0;
}
