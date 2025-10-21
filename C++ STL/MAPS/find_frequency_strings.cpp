#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    unordered_map<string,int> m;
    for (int i = 0; i < N; i++)
    {
        string s;
        cin>>s;
        m[s] ++;
    }
    
    for (auto &it: m)
    {
        cout << it.first << " " << it.second << "\n";
    }
    


   return 0;
}