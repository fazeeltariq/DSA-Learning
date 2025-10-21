#include <bits/stdc++.h> // Includes most standard C++ headers (not best practice in production)
using namespace std;

int main()
{
    // Initialize a vector of integers
    vector<int> vec = {1,2,3,4,5,6,7,8,9,10,10,10,11,1,1,1};

    // Find and print the minimum element in the entire vector
    cout << *(min_element(vec.begin(), vec.end())) << endl; // Output: 1

    // Find and print the minimum element in a subrange:
    // From index 2 (inclusive) to index vec.size()-4 (exclusive)
    cout << *(min_element(vec.begin() + 2, vec.end() - 4)) << endl; // Output: 1

    // Find and print the maximum element in the entire vector
    cout << *(max_element(vec.begin(), vec.end())) << endl; // Output: 11

    // Calculate and print the sum of all elements in the vector
    cout << accumulate(vec.begin(), vec.end(), 0) << endl; // Output: 90

    // Count and print how many times '1' appears in the vector
    cout << count(vec.begin(), vec.end(), 1) << endl; // Output: 4

    // Find the first occurrence of '1' and print it
    // find() returns an iterator; if not found, it returns vec.end()
    cout << *(find(vec.begin(), vec.end(), 1)) << endl; // Output: 1

    // Reverse a string entered by the user
    string s;
    cin >> s; // Input example: hello
    reverse(s.begin(), s.end()); // Modifies the string in place
    cout << s; // Output example: olleh

    return 0;    
}
