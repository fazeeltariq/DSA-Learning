#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> v[N];   // N vectors with 0 size => it means it has N rows

    // inputting
    for (int i = 0; i < N; i++)
    {
        int n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
        
    }
    
   return 0;
}