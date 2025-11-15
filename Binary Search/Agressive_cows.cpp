#include <bits/stdc++.h>
using namespace std;

bool isminimum(vector<int> &vec, int distance, int cows){

    int count=1;
    int last=vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        if(distance<=vec[i]-last){
        count++;
        last=vec[i];
        }
    }
    return count>=cows;
}

int main()
{
    int n;
    cin>>n;
    int c;
    cin>>c;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
     sort(vec.begin(), vec.end());
    int start=1, end= vec[vec.size()-1] - vec[0];

    int ans=0;
    while (start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(isminimum(vec,mid,c)){
            start=mid+1;
            ans=mid;
        }
        else{
            end=mid-1;
        }
    }
    cout<<ans;
    return 0;
}