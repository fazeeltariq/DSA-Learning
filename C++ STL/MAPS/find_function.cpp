#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;

    m.insert({4,"Hello"});
    
    m[1] = "fazeel";           
    m[56] = "Babar";
    m[18] = "ABD 360";

    auto it1 = m.find(56);   // O(log(N))
    auto it2 = m.find(32);

    if(it1!=m.end()){
        cout << it1->second;
    }
    else{
        cout<<"\nKey does not exist: ";
    }

    
    if(it2!=m.end()){
        cout << it2->second;
    }
    else{
        cout<<"\nKey does not exist: ";
    }


   return 0;
}