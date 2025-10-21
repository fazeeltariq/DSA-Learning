#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v){         // also copies
   for(int num: v){                    // so always use &
      cout<<num<<" ";
   }
}

int main()
{
   vector<int> vec(10,3); // size,value
   vector<int> v1 = vec;    // O(n) PASSED BY VALUE
   printvec(vec);


   return 0;
}