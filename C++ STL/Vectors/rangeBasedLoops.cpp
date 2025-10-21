#include<bits/stdc++.h>
using namespace std;
int main()
{
     
    vector<int> vec ={2,3,4,5,6};
    for(int i=0;i<5;i++) 
    cout<<vec[i]<<" ";

    cout<<endl;
    // for loop range based
    for (int num:vec)    // num is copying value
    {
        num++;
        cout<<num <<" ";  
    }
     cout<<endl;
     // auto => dynamically determines the data type

    for (auto &num: vec)    // num is copying value => use &
    {
        cout<<num <<" ";  
    }
    cout<<endl;


    for(int i=0;i<5;i++) 
    cout<<vec[i]<<" ";
    
   return 0;
}