#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {2,3,4,5,6};
    for(int i=0;i<5;i++) cout << vec[i] << " ";

    cout << endl;

    vector<int> ::iterator it = vec.begin();
    cout << (*it) <<" ";

    cout << (*(it+1)) << " \n";   // it+1 => next location    // no difference for vectors
    
    for (it = vec.begin(); it != vec.end(); it++)   // it++ => moves to next iterator
    {
        cout << (*it) <<" ";
    }
    
   return 0;
} 