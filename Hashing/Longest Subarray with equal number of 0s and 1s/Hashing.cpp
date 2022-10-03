#include <bits/stdc++.h>
using namespace std;
int maxlen(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (arr[i] == 0) ? -1 : 1;
    }

    unordered_map<int, int> ump;
    int sum = 0, maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0)
            maxlen = i + 1;

        if (ump.find(sum + n) != ump.end())
        {
            if (maxlen < i - ump[sum + n])
            {
                maxlen = i - ump[sum + n];
            }
        }
        else
            ump[sum + n] = i;
    }
    return maxlen;
}
int main()
{
    int arr[] = {1, 1, 1, 0, 1, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxlen(arr, n) << endl;
    return 0;
}