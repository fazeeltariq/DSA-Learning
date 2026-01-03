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
    cout<<"\nEnter the starting range: ";
    int sti,stj;
    cin>>sti>>stj;
    cout<<"\nEnter the ending range: ";
    int eni,enj;
    cin>>eni>>enj;
    
    cout<<"\nEnter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0;
    for (int i = sti; i <= eni; i++)
    {
        for (int j = stj; j <= enj; j++)
        {
            sum+=arr[i][j];
        } 
    }
    cout<<"\nThe sum of given range is: "<<sum;

    return 0;
}