#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "\nEnter the stirng: ";
    getline(cin, s);
    string word;
    int count = 0;

    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        string a;
        while (s[i] != ' ' && i < s.length())
        {
            a += s[i];
            i++;
        }
        reverse(a.begin(), a.end());
        if (!word.empty()) word += ' ';
        word += a;
    }
   

    cout << "the" << word;

    return 0;
}