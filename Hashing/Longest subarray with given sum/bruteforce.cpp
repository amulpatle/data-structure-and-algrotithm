#include <bits/stdc++.h>
using namespace std;
int largestSubarrayWithSumX(int arr[], int n, int sum)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int presum = 0;
        for (int j = i; j < n; j++)
        {
            presum += arr[j];
            if (presum == sum)
            {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = {8, 3, -7, -4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = -8;
    cout << largestSubarrayWithSumX(arr, n, sum) << endl;
    return 0;
}