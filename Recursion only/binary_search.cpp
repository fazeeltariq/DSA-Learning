#include <iostream>
using namespace std;

int binary_search(int arr[], int st, int en, int target) {
    if (st > en) {
        return -1;
    }

    int mid = st + (en - st) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binary_search(arr, st, mid - 1, target);
    } else {
        return binary_search(arr, mid + 1, en, target);
    }
}

int main()
{
    int arr[10];
    cout<<"\nEnter the elements of array: ";
    for (int i = 0; i < 10; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"\nEnter the target: ";
    cin>>target;
    
    int index=binary_search(arr,0,9,target);
    cout<<"\nThe index is: "<<index;
    return 0;
}