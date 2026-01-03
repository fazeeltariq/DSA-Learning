#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin >> s;
   stack<char> st;

   
   bool found = false;
   
   for (int i = 0; i < s.length(); i++)
   {

      if (s[i] == ')') {
         if(st.empty()){
            found = true;
            break;
         }
         else
         st.pop();
      }
      else if (s[i] == '('){
         st.push(s[i]);
      }
   }

   if(!found) {
      cout << "\nParenthesis is valid and balanced: ";
   }
   else {
      cout << "\nNot valid and balance: ";
   }
   return 0;
}