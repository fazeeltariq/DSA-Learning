#include<iostream>
#include <vector>
using namespace std;

int partition ( vector<int> &vec , int start , int end){
    int pivot = vec[end];
    int index = start - 1;
    for (int i = start; i < end; i++)
    {
        if (vec[i] <= pivot)
        {
            index++;
            swap (vec[i], vec[index]);
        }
    }
    index++;
    swap (vec[index], vec[end]);
    return index;
}

void quicksort( vector<int> &vec, int start , int end){
    if( start < end){

    int pivot = partition (vec , start , end);
    quicksort (vec, start, pivot - 1);
    quicksort (vec, pivot + 1, end);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec (n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    quicksort(vec, 0 , n-1);

    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << " ";
    }
    
    
   return 0;
}
