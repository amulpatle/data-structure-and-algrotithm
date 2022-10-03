#include <bits/stdc++.h>

using namespace std;
int findlongest(int arr[], int n)
{
    unordered_set<int> us;

    for (int i = 0; i < n; i++)
    {
        us.insert(arr[i]);
    }
    int res = 1;
    for (auto x : us)
    {
        if (us.find(x - 1) == us.end())
        {
            int curr = 1;
            while (us.find(x + curr) != us.end())
            {
                curr++;
                res = max(res, curr);
            }
        }
    }
    return res;
}
int main()
{
    int arr[] = {1, 9, 3, 4, 2, 10, 13};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << findlongest(arr, n) << endl;

    return 0;
}