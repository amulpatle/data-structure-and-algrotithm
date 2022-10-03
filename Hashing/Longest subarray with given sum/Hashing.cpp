// #include <bits/stdc++.h>
// using namespace std;
// int largestSubarrayWithSumX(int arr[], int n, int sum)
// {
//     unordered_map<int, int> um;
//     int presum = 0;
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         presum += arr[i];

//         if (presum == sum)
//             res + 1;

//         if (um.find(presum) == um.end())

//             um.insert(presum, i);

//         if (um.find(presum - sum) != um.end())

//             res = max(res, i - um[presum - sum]);
//     }
//     return res;
// }
// int main()
// {
//     int arr[] = {8, 3, -7, -4, 1};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = -8;
//     cout << largestSubarrayWithSumX(arr, n, sum) << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int largestSubarrayWithSumX(int arr[], int n, int sum)
{
    int prefix_sum = 0;
    unordered_set<int> us;
    us.insert(0);
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if (us.find(prefix_sum - sum) != us.end())
            return 1;
        us.insert(prefix_sum);
    }
    return 0;
}

int main()
{
    int arr[] = {8, 3, -7, -4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = -8;

    cout << largestSubarrayWithSumX(arr, n, sum);
}