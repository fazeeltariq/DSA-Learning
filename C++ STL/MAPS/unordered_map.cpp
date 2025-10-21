#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Difference from maps
    // 1. use hash tables 
    // 2. Time complexity is O(1) for insertion and exertion
    // 3. Does not keep keys in sorted order.
    // 4. Cannot use complex data types in unordered maps like maps like pair.
    // 5. m.find()  and m.end()  T.C => O(1)
    unordered_map<int,string> m;

    m.insert({4,"Hello"});
    m[1] = "fazeel";           // insertion O(log(N)) where N is the size of map
    m[56] = "Babar";
    m[18] = "ABD 360";
   return 0;
}