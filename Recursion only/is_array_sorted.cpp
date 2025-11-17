#include <iostream>
using namespace std;

bool is_sorted (int arr[] , int i , int size )
{
    if(i == size-1) return true;
    
    if(arr[i]>arr[i+1]) return false;
   
    return  is_sorted (arr , i+1 , size);
}



int main() {
    int arr[10];
    cout << "\nEnter the elements: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    if (is_sorted(arr, 0, 10)) {
        cout << "\nThe array is sorted.";
    } else {
        cout << "\nThe array is not sorted.";
    }

    return 0;
}
