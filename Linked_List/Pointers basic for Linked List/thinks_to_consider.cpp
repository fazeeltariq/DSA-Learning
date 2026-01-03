#include <iostream>
using namespace std;
int main()
{
    int *ptr = nullptr; // ✅ Good
    //  int* p;            // ❌ Bad (undefined garbage address)

    int *p = new int(10);   // allocates a single integer with value 10
    int *arr = new int[10]; // allocates array of 10 ints

    delete p;
    delete[] arr;
    p = nullptr; // ✅ Reset after delete


    // dont do this !

    // int *p = new int(5);
    // delete[] p; // ❌ WRONG: Used delete[] for single int

    // int *arr = new int[10];
    // delete arr; // ❌ WRONG: Used delete for array




    return 0;
}