#include<bits/stdc++.h>
using namespace std;

// In => in-built Sort if we want to swap we should return false; 
bool shouldcomebefore(pair<int,int> a, pair<int,int> b)
{
    if(a.first != b.first)
    {
        return a.first < b.first; // true 
    }
    else{
        return a.second > b.second ;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<pair<int,int>> p(n);


    for(int i = 0;i < n;i++){
        cin >> p[i].first >> p[i].second;
    } 

    sort(p.begin(),p.end(),shouldcomebefore);


    for(int i=0;i<n;i++) 
    {
        cout << p[i].first << " " << p[i].second << endl;
    }

   return 0;
}