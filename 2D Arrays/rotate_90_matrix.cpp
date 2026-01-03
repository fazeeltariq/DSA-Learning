#include<iostream>
#include<cmath>
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

     for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n/2; j++)
        {
            swap(arr[i][j],arr[i][n-1-j]);
        }
    }

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}





