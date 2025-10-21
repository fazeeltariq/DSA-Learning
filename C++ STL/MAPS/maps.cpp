#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 1. stores key in sorted order. 
    // 2. map keeps relation of key and value.
    // 3. Unique Keys always
    // 4. Insert and exertion both have O(log(N)) and when we do in actual questions then it is O(N*log(N))

    map<int,string> m;

    m.insert({4,"Hello"});
    m[1] = "fazeel";           // insertion O(log(N)) where N is the size of map
    m[56] = "Babar";
    m[18] = "ABD 360";

    m[12]; // it also takes O(log(N)) and creates a empty string / datatype

    for(auto &it: m){
        cout << "Key: " << it.first << " Value: " << it.second <<endl;
    }
    
   return 0;
}