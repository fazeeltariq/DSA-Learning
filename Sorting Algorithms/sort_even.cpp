#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec;
    int n;
    cout<<"\nEnter the size of array: ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        vec.push_back(a);
    }
    
    for (int i = 0; i < n; i++)
    {
        int minindex = i;
        int min = vec[i];

        for (int j = i + 1; j < n; j++)
        {
            if(vec[j]%2==0){
            if (vec[j] < min)
            {
                min = vec[j];
                minindex = j;
            }
        }
        }
        swap(vec[i], vec[minindex]);
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<vec[i]<<" ";
    }
    
    return 0;
}