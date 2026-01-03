#include <iostream>
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
    int row;
    cout<<"\nEnter the row number: ";
    cin>>row;
    int sum=0;
    for (int i = row-1; i < n ; i++)
    {
        for (int j = 0; j < m ; j++)
        {
            sum+=arr[i][j];
        } 
        break;
    }
    cout<<"\nThe sum of given row is: "<<sum;
    return 0;
}