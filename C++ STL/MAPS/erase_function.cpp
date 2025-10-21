#include<bits/stdc++.h>
using namespace std;
int main()
{
    // important note on Time complexity dependency on keys for maps
    // For map time complexity is dependent on data strucure we are using. If we use map<string,string> then it 
    // has time complexity of (s.size()*log(N)), because map stores keys in sorted order.
   map<int,string> m;
    m.insert({4,"Hello"});
    m[1] = "fazeel";           
    m[56] = "Babar";
    m[18] = "ABD 360";

    m.erase(1);  //  for erasing => O(log(N))

    auto it = m.find(56);

    // for preventing segmentation fault: 
    if(it!=m.end()){
        m.erase(it);
    }
    else{
        cout <<"\nValue does not exist: ";
    }


     for(auto &it: m){
        cout << "Key: " << it.first << " || Value: " << it.second <<endl;
    }
    
   return 0;
}