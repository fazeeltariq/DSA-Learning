#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1. Set stoes only unique elements
    // 2. Also in sorted order
    set<string> s;
    s.insert("abc");    //O(log(N))
    s.insert("xyz");

    auto it = s.find("abc");  // O(log(N))
    if(it!=s.end()){
        cout << *it ;
    }
    
    for(auto &it: s){
        cout << it << endl;
    }
    for(string s: s){
        cout << s << endl; 
    }
   return 0;
}