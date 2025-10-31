#include <iostream>
using namespace std;

int main()
{
    int n1,m1;
    cout<<"\nEnter the no. of rows of 1st matrix: ";
    cin>>n1;
    cout<<"Enter the no. of cols of 1st matrix: ";
    cin>>m1;

    int arr[n1][m1];
    cout <<"\nEnter the elements of 1st matrix:\n";
    for (int i=0;i< n1;i++)
        for (int j = 0; j< m1;j++)
            cin>>arr[i][j];

    int n2,m2;
    cout<<"\nEnter the no. of rows of 2nd matrix: ";
    cin>>n2;
    cout<<"Enter the no. of cols of 2nd matrix: ";
    cin>>m2;

    int brr[n2][m2];
    cout << "\nEnter the elements of 2nd matrix:\n";
    for (int i=0;i<n2;i++)
        for (int j =0; j <m2;j++)
            cin >> brr[i][j];

    if (m1!=n2)
    {
        cout<<"\nMultiplication is not possible.\n";
        return 0;
    }
    int result[n1][m2]={0};
    for (int i = 0; i < n1;i++)
    {
        for (int j = 0;j < m2;j++)
        {
            for (int k = 0; k < m1; k++)
            {
                result[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    cout << "\nResultant Matrix:\n";
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
