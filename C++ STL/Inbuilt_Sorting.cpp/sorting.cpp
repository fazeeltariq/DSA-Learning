#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }


    // sort(arr,arr+n);   // sort complete array

     sort(arr+2,arr+n);   // sort from 2nd index to last

    // sort(arr,arr+2);    // sort from 0th index to 1st index

     for(int i = 0;i < n; i++){
        cout << arr[i] << " ";
    }

   return 0;
}