#include<bits/stdc++.h>
using namespace std;

void bubble_sort (vector<int> &vec , int i , int j , int size)
{
    if ( i== size-1 ) return;

    if( j == size-i ){
        j = 0;
        i++;
    }
    if (vec[j] > vec [j+1]){
        swap ( vec[j], vec[j+1]);
    }
    bubble_sort(vec , i , j+1 , size);
}

int main()
{
    vector<int> vec(10);
    for (int i = 0; i < 10; i++)
    {
        cin >> vec[i];
    }
    cout << "\nBefore sorting :";
    for (int i = 0; i < 10; i++)
    {
        cout << vec[i] << " ";
    }
    
    bubble_sort(vec , 0 , 0 , 10);

    cout << "\nAfter sorting :";
    for (int i = 0; i < 10; i++)
    {
        cout << vec[i] << " ";
    }
   return 0;
}