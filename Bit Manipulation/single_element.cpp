#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {1,2,2,1,3,4,4,3,5,7,6,6,7};
    int ans = vec[0];
    for (int i = 1; i < vec.size(); i++)
    {
        ans = ans^vec[i];
    }
    cout<<"\nThe single element is: "<<ans;

   return 0;
}