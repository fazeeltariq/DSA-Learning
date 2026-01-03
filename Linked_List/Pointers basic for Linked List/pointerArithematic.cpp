#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr1=&arr[4];
    int* ptr2=&arr[3];
    cout<<ptr1-ptr2<<endl;       // subtracting pointers are allowed in C++ => It gives no of blocks stored beteen these two.

    cout<<(ptr1>ptr2);
    if(ptr1<ptr2){

    }
    return 0;
}