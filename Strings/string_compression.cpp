#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> c;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        char a;
        cin>>a;
        c.push_back(a);
    }
    int count=1;
    char ch=c[0];
    int index=0;
    int j=0;
    for (int i = 1; i < n+1; i++)
    {
        if(c[i]==ch && i!=n){
            count++;
        }
       
        else {
            cout<<count<<" for "<<c[i-1]<<"\n";
            j++;
            c[index++]=c[i-1];
            if(count>1){
            string s=to_string(count);
            for (char a: s)
            {
                c[index++]=a;
                j++;
            }
        }
            count=1;
            ch=c[i];
        }
    }
   
    for (int i = j; i < c.size(); i++)
    {
        c[i]=' ';
    }
    cout<<"\nsize of c "<<c.size();
    for (int i = 0; i < c.size(); i++)
    {
    cout<<c[i]<<" ";
    }

    
    return 0;
}