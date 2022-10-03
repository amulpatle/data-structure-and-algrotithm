#include <bits/stdc++.h>
using namespace std;
int intersection(int arr[], int b[], int m, int n)
{

    int res = 0;
    for (int i = 0; i < m; i++)
    {
        bool flag = false;
        for (int j = 0; j < i - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
            if (flag == true)
            {
                continue;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == b[j])
            {
                res++;
                break;
            }
        }
    }
    return res;
}
int main()
{
    int arr1[] = {15, 17, 27, 27, 28, 15, 9};
    int arr2[] = {16, 17, 28, 17, 31, 17, 9};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    cout << intersection(arr1, arr2, m, n) << endl;
    return 0;
}