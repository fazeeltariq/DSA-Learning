#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            cout<<" ";
        }
        int a=1;
        bool yes=false;
        for (int k = 0; k < 2*i-1; k++)
        {
            cout<<a;
            if(i==a){
                yes=true;
            }
            if(yes){
                a--;
            }
            else{
            a++;
            }
        }

        cout<<"\n";
    }
    return 0;
}