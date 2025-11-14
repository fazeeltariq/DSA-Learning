#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int cur = arr[i];
        int pre = i - 1;

        while (pre >= 0 && arr[pre] > cur)
        {
            arr[pre + 1] = arr[pre];
            pre--;
        }

        arr[pre + 1] = cur;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = {3, 4, 1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}
