#include<bits/stdc++.h>
using namespace std;
int main()
{
    // use pair when we want to maintain relations between two items
    pair<int,string> p;
    pair<int,string> p1;

    
    p = make_pair(1,"Fazeel"); // 1st way

    p1  = {56,"Babar Azam"};   // 2nd way
    
    cout << p.first << " " << p.second <<endl;
    cout << p1.first << " " << p1.second <<endl;

    vector<pair<int,int>> pa;
    pa.push_back({1,2});
    pa.push_back({4,8});
    pa.push_back({6,12});
  

    swap(pa[0],pa[1]);
    for(int i=0;i<3;i++){
        cout << pa[i].first << " " << pa[i].second <<endl;
    }

    // we can do for inputing value  in pair like =>  cin >> p.first >> p.second;

     // Nested pairs
    pair<int, pair<int, int>> nested = {1, {2, 3}};
    cout << nested.first << " " << nested.second.first << " " << nested.second.second << "\n";
   return 0;
}