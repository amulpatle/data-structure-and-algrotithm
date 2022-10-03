#include <bits/stdc++.h>
using namespace std;
int maxcommon(int arr1[], int arr2[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++)
        {

            sum1 += arr1[i];
            sum2 += arr2[i];
            if (sum1 == sum2)
            {
                res = max(res, j - i + 1);
            }
        }
    }
    return res;
}
int main()
{
    int arr1[] = {0, 1, 0, 1, 1, 1, 1};
    int arr2[] = {1, 1, 1, 1, 1, 0, 1};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    cout << maxcommon(arr1, arr2, n) << endl;
    return 0;
}