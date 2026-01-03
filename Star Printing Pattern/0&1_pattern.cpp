#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a=1;
        int b=0;
        for (int j = 0; j < i+1; j++)
        {
        if(i%2==0){
            if(a==1){
                cout<<"1";
                a--;
            }
            else{
            cout<<"0";
            a++;
            }
        }
        else{
            if(b==0){
                cout<<"0";
                b++;
            }
            else{
                cout<<"1";
                b--;
            }
        }   
        }
        cout<<"\n";
    }
    
    return 0;
}