#include <bits/stdc++.h>
using namespace std;

int window(int arr[], int k)
{
    int count = 0;

    for (int i = 0; i < k; i++)
    {
        int j;

        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (j == i)
            count++;
    }
    return count;
}

void countDistinct(int arr[], int n, int k)
{
    for (int i = 0; i <= n - k; i++)
    {
        cout << window(arr + i, k) << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 1, 3, 4, 2, 3}, k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    countDistinct(arr, n, k);
    cout << endl;

    return 0;
}