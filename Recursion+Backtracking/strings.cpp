#include<bits/stdc++.h>
using namespace std;

string remove_a (int count, string &s, string a = "")
{
    if(count == s.length())  return a;

    if(s[count] !=  'a'){
        a += s[count];
    }
    return remove_a (count +1 , s , a);
}
int main()
{
    string s;
    cin >> s;
    string a = remove_a(0,s);
    cout << a;
   return 0;
}