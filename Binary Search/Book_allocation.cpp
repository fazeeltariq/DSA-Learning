#include <bits/stdc++.h>
using namespace std;

bool ispossible(vector<int> &a, int max, int students)
{
    int count=1;
    int maxpages=0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i]>max) return false;
        
        if(maxpages + a[i] > max){
            maxpages = a[i];
            count++;
        }
        else{
            maxpages+=a[i];
        }
        
    }

   return count <= students;
}

int main()
{
    int N; // no of books
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    int m_students; // students
    cin >> m_students;
    int start = *max_element(a.begin(),a.end()), end = accumulate(a.begin(), a.end(), 0);
    int ans = 0;
    while (start <= end)
    {
        int possibleanswer = start + (end - start) / 2;

        if (ispossible(a, possibleanswer, m_students))
        {
            end = possibleanswer - 1;
            ans = possibleanswer;

        }
        else
        {
            start = possibleanswer+1;
           
        }
    }
    cout<<ans;

    return 0;
}