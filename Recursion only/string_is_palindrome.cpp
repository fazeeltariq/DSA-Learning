#include <iostream>
using namespace std;

bool is_string_palindrome(string s,int i,int length){
    if(i>=length){
        return true;
    }
    if(s[i]!=s[length-1-i]){
        return false;
    }

     return is_string_palindrome(s, i + 1, length);
}
int main()
{
    string s;
    cout<<"\nEter the string: ";
    cin>>s;
    int i=0;
    int length=s.length();
    if(is_string_palindrome(s,i,length)){
        cout<<"\nYES: ";
    }
    else{
        cout<<"\nNO: ";
    }
    return 0;
}