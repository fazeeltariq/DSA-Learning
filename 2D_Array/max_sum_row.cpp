#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"\nEnter the no. of rows: ";
    cin>>n;
    cout<<"\nEnter the no. of cols: ";
    cin>>m;
    int arr[n][m];

    cout<<"\nEnter the elements of array: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum=0;
    int index=-1;
    int max=INT_MIN;
    for (int i = 0; i < n ; i++)
    {
        sum=0;
        for (int j = 0; j < m ; j++)
        {
            sum+=arr[i][j];
        }

        if(sum>max){
            max=sum;
            index=i+1;
        }
    }

    cout<<"\nThe maximum sum is "<<max<<" and row number is: "<<index;
    return 0;
}