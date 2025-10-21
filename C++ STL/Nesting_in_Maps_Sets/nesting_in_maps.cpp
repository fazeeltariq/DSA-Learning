#include<bits/stdc++.h>
using namespace std;


struct cmp {
    bool operator()(const pair<int,string>& a, const pair<int,string>& b) const {
        if (a.first != b.first)
            return a.first > b.first; // higher marks first
            
        return a.second < b.second;   // if marks equal, sort by name ascending
    }
};

int main()
{
   int t;
   cin >> t;
   set<pair<int,string>,cmp> s;
   while (t--)
   {
    string name;
    
    int marks;
    cin >> name >> marks;
    s.insert({marks,name});

   }

   for (auto &it: s){
    cout << it.second << " " <<  it.first<< endl;
   }

    
   return 0;
}