#include <iostream>
using namespace std;

void reverse_string(string& s,int i,int length){
    if(i>=length/2+1){
        return;
    }
    swap(s[i],s[length-1-i]);
    reverse_string(s,i+1,length);
    return;
}

int main()
{
    string s;
    cout<<"\nEnter the string: ";
    cin>>s;
    int i=0;
    int length=s.length();
    reverse_string(s,i,length);
    cout<<"\nAfter reversing string is: "<<s;
    return 0;
}