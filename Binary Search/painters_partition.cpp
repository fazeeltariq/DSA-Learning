#include <bits/stdc++.h>
using namespace std;

bool canpaint(vector<int> vec, int minimumtime, int painters){
    int count=1;
    int currenttime=0;
    for (int i = 0; i < vec.size(); i++)
    {
        if(vec[i] +  currenttime > minimumtime){
            count++;
            currenttime=vec[i];
        }
        else{
            currenttime+=vec[i];
        }
    }
    return count<=painters;
    
}
int main()
{
    
    int n;
    cin>>n;
    vector<int> vec(n);
    int painters;
    cin>>painters;
    for (int i = 0; i < n; i++)
    {
        cin>>vec[i];
    }
    int st=1,end=accumulate(vec.begin(),vec.end(),0);
    int ans=0;
    while (st<=end)
    {
       int mid=st+(end-st)/2;
       
       if(canpaint(vec,mid,painters)){
        ans=mid;
        end=mid-1;
       }
       else{
        st=mid+1;
       }

    }
    cout<<ans;
    
    return 0;
}