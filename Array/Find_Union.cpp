#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int m = 4;
    int arr1[n] = {2, 5, 6};
    int arr2[m] = {4, 6, 8, 10};
    int arr3[m + n];
    for (int i = 0; i < n + m; i++)
    {
        if (i <= n)
        {
            arr3[i] = arr1[i];
        }
        arr3[i] = arr2[i];
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}