#include <bits/stdc++.h>
using namespace std;
int longestCommonSum(int arr1[], int arr2[], int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
        arr[i] = arr1[i] - arr2[i];

    unordered_map<int, int> ump;
    int sum = 0;
    int maxlen = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0)
        {
            maxlen = i + 1;
        }
        if (ump.find(sum) != ump.end())
        {
            maxlen = max(maxlen, i - ump[sum]);
        }
        else
        {
            ump[sum] = i;
        }
    }
    return maxlen;
}
int main()
{
    int arr1[] = {0, 1, 0, 1, 1, 1, 1};
    int arr2[] = {1, 1, 1, 1, 1, 0, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << longestCommonSum(arr1, arr2, n) << endl;
    return 0;
}
