#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,-1,5};
    int maxsum=-99999999;
    int sum=0;

    for (int i = 0; i < 5; i++)
    {
        sum=0;
        for (int j = i; j < 5; j++)
        {
            sum+=arr[j];
            maxsum=max(sum,maxsum);
        }
    }
    cout<<"\nMaximum sub-array sum is: "<<maxsum;    

    return 0;
}