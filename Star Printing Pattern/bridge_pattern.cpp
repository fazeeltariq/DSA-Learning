// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int np=0;
//     int nt=n;
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j < np; j++)
//         {
//             cout<<" ";
//         }

//         for (int k = 0; k < nt; k++)
//         {
//             cout<<"*";
//         }
//         nt--;
//         np++;
//         cout<<"\n";
//     }
//     int a=n/2;

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    cout<<"\n";
    int b=n/2;
    int nt=b;
    int np=1;
    for (int i = 0; i < b; i++)
    {
        for (int k = 0; k < nt; k++)
        {
            cout<<"*";
        }
        for (int j = 0; j < np; j++)
        {
            cout<<" ";
        }
        for (int z = 0; z < nt; z++)
        {
            cout<<"*";
        }
        np+=2;
        nt-=1;
        cout<<"\n";
    }
    
    return 0;
}