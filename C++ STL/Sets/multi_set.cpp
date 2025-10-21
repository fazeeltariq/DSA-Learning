#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1. Allows duplicates 
    // 2. stores in sorted order

    multiset<string> ms;
    ms.insert("abc");
    ms.insert("abc");
    ms.insert("abc");
    ms.insert("aaa");
    ms.insert("efg");

    auto it = ms.find("abc");  // O(log(N))
    // it will return the iterator of first value if exist

    if(it!=ms.end()){
        ms.erase(it);    // it will erase the  value iterator have.
        ms.erase("abc");  // it will erase all the values if exists multple times.
    }
    else{
        cout <<"\nDoes not exist: ";
    }

    for(auto &it: ms){
        cout << it << endl;
    }

   return 0;
}