#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int start, int end){
    int index=start-1;
    int pivot=arr[end];
    for (int i = start; i < end; i++)
    {
       if(arr[i]<=pivot){
        index++;
        swap(arr[i],arr[index]);
       } 
    }
    index++;
    swap(arr[index],arr[end]);
    return index;
}

void quicksort(vector<int>& arr,int start , int end){
    if(start<end){
    int pivotindex=partition(arr,start,end);
    quicksort(arr,start,pivotindex-1);
    quicksort(arr,pivotindex+1,end);
    }
    else return;
   
}

int main()
{
    vector<int> arr={5,4,1,2,3};

    quicksort(arr,0,4);
    
   for(int value: arr){
    cout<<value<<" ";
   }
    
    return 0;
}