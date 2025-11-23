#include <iostream>
using namespace std;
int main()
{
     int fre[10]={0};
    int arr[10]={1,2,3,1,2,3,4,5,5,2};
    for (int i = 0; i < 10; i++)
    {
        int found=0;
        for (int k = 0; k < i; k++)
        {
            if(arr[i]==arr[k]){
                found=1;
                break;
            }
        }
        if(found==1) continue;
        fre[i]=1;
        for (int j = i+1; j < 10; j++)
        {
            if(arr[i]==arr[j]){
               fre[i]++; 
            }
        }    
    cout<<arr[i]<<" has frequency: "<<fre[i]<<" \n";
    }
    
    return 0;
}