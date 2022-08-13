#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;

    int arr[n] = {13, 56, 67, 33, 67, 9};

    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << " the element is : " << arr[i] << " At indedx : " << i << endl;
            break;
        }
    }

    return 0;
}