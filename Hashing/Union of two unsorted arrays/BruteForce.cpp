#include <bits/stdc++.h>
using namespace std;
int Union(int arr[], int arr2[], int m, int n)
{
    int c[m + n];

    for (int i = 0; i < n; i++)
    {
        c[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        c[m + i] = arr2[i];
    }

    int res = 0;

    for (int i = 0; i < m + n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (c[i] == c[j])
            {
                flag = true;
                break;
            }
            if (flag == false)
                res++;
        }
    }

    return res;
}

int main()
{
    int arr1[] = {2, 8, 3, 5, 6};
    int arr2[] = {4, 8, 3, 6, 1};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    cout << Union(arr1, arr2, m, n) << endl;

    return 0;
}