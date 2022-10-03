#include <bits/stdc++.h>
using namespace std;
// int maxlength(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int z = 0;
//         int o = 0;
//         for (int j = i; j < n; j++)
//         {
//             if (arr[i] == 0)
//                 z++;
//             if (arr[i] == 1)
//                 o++;
//             if (o == z)
//                 res = max(res, j - i + 1);
//         }
//     }
//     return res;
// }
int findMaxLength(int nums[], int n)
{
    int maxlen = 0;
    for (int start = 0; start < n; start++)
    {
        int zeroes = 0, ones = 0;
        for (int end = start; end < n; end++)
        {
            if (nums[end] == 0)
            {
                zeroes++;
            }
            else
            {
                ones++;
            }
            if (zeroes == ones)
            {
                maxlen = max(maxlen, end - start + 1);
            }
        }
    }
    return maxlen;
}
int main()
{

    int arr[] = {1, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << findMaxLength(arr, n) << endl;
    return 0;
}