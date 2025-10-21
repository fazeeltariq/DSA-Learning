#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // if you do not know the size:
    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        int s;
        cin>>s;
        for (int j = 0; j < s; j++)
        {
            int a;
            cin>>a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout<<v[i][j] <<" ";
    //     }
    //     cout<<"\n";
    // }

    for (auto &row :v)
    {
        for(auto &r: row) {
            cout << r << " ";
        }
        cout << "\n";
    }
    
   return 0;
}


 // if you know how many cols and rows will be in our vector

    // int rows,cols;
    // cin>>rows>>cols;
    // vector<vector<int>> vec(rows,vector<int>(cols));

    //  // Input
    // for (int r = 0; r < rows; r++) {
    //     for (int c = 0; c < cols; c++) {
    //         cin >> vec[r][c];
    //     }
    // }










// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     vector<vector<int>> v(n); // Directly size the outer vector

//     for (int i = 0; i < n; i++) {
//         int s;
//         cin >> s;
//         v[i].resize(s); // Pre-size inner vector
//         for (int j = 0; j < s; j++) {
//             cin >> v[i][j];
//         }
//     }

//     // Printing with formatting
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < v[i].size(); j++) {
//             cout << v[i][j] << " ";
//         }
//         cout << "\n"; // Newline after each list
//     }

//     return 0;
// }
