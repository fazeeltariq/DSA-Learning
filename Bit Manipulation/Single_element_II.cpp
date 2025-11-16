#include<bits/stdc++.h>
using namespace std;
int main()
{
    // every number is appearing 3 times except one. Find that single number
    vector<int> vec = {2,3,3,2,2,4,5,3,5,5,1,4,4};
    int result = 0;

    for (int i = 0; i < 32; i++)
    {
        int sum = 0;
        int mask = 1<<i;
        for(int num: vec){
            if(num & mask){
                sum++;
            }
        }
        if(sum%3!=0){
            result |= mask;
        }
    }
    cout<<"\nUnique number is: "<<result;
   return 0;
}