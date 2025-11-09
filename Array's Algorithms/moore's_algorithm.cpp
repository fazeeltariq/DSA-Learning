#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,2,2,4,2,2,0,2,5};
    int n=10;

    int fre=0;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
    if(fre==0){
        ans=arr[i];
    }
    if(ans==arr[i]){
        fre++;
    }
    else{
        fre--;
    }
    }
    cout<<"\nThe majority element is: "<<ans;
    

    return 0;
}