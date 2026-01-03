// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int b=n/2+1;
//     for (int i = 1; i <= b; i++)
//     {
//     for (int j = 0; j < b-i; j++)
//     {
//         cout<<" ";
//     }
//     for (int k = 0; k < 2*i-1; k++)
//     {
//         cout<<"*";
//     }
//     cout<<"\n";
//     }
//     int c=n-b;
//     int z=c+2;

//     for (int i = 0; i < c; i++)
//     {
//         for (int j = 0; j < i+1; j++)
//         {
//             cout<<" ";
//         }
//         for (int k = 0; k < z; k++)
//         {
//             cout<<"*";
//         }
//         z-=2;
//          cout<<"\n";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int nst=1;
    int nsp=n/2;
    bool hello=true;;
    for (int i = 0; i < n; i++)
    {
        if(hello){
        for (int j = 0; j < nsp; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < nst; k++)
        {
            cout<<"*";
        }
        nsp--;
        nst+=2;
        }
        else{
            for (int j = 0; j < nsp; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < nst; k++)
        {
            cout<<"*";
        }
        nsp++;
        nst-=2; 
        }
        if(nsp==0 && nst==n){
            hello=false;
        }
        cout<<"\n";

    }
    
    return 0;
}