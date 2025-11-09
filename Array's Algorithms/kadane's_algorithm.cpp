#include <bits/stdc++.h>
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
    
    int cursum=0,maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cursum+=vec[i];
        maxsum=max(cursum,maxsum);
        if(cursum<0){
            cursum=0;
        }
    }
    cout<<"\nThe maximum sub-array sum is: "<<maxsum;
    return 0;
}