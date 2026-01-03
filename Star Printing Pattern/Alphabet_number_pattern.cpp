// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a=65;
        for (int j = 0; j <= i; j++)
        {
            if(i%2==0){
                cout<<j+1<<" ";
            }
            else{
            printf("%c ",a);
            a++;
            }
        }
        cout<<"\n";
    }
    
    return 0;
}