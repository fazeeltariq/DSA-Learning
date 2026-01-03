#include <iostream>
using namespace std;

void display(int arr[])
{
    cout << "\nSize of array: " << sizeof(arr); // Outputs 8 on 64-bit system (not array size!).
}

int main()
{
    int arr[5] = {1, 2, 4, 5, 6}; // array not pointer however it behaves like a pointer.

    cout << arr << endl; // arr is a constant pointer.
    cout << *arr << endl;
    cout << &arr[0] << endl;
    cout << *(arr + 1);

    display(arr);

    int *p = arr; // arr behaves like a pointer. Although it is a array of integers.

    int c = 99;
    int *ptr10 = &c;
    // arr=ptr;      // error! cannot assigned because arr is a constant pointer.

    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            cout << *(*(mat + i) + j) << " ";

    return 0;
}