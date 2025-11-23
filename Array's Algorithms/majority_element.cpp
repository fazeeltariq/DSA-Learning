#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 1, 3, 1, 1, 1, 1, 2, 2, 3};
    int n = 10;

    for (int i = 0; i < n; i++)
    {
        int fre = 1;
        bool alreadyChecked = false;
       
        for (int k = 0; k < i; k++)
        {
            if (arr[i] == arr[k])
            {
                alreadyChecked = true;
                break;
            }
        }

        if (alreadyChecked)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                fre++;
            }
        }
        if (fre > n / 2)
        {
            cout << "\nMajority element is: " << arr[i];
            break;
        }
    }

    return 0;
}
