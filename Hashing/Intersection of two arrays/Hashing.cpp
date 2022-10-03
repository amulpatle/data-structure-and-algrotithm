#include <bits/stdc++.h>
using namespace std;
int intersection(int arr[], int b[], int m, int n)
{
    unordered_set<int> us;
    for (int i = 0; i < m; i++)
        us.insert(arr[i]);

    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (us.find(b[i]) != us.end())
        {
            res++;
            us.erase(b[i]);
        }
    }
    return res;
}
int main()
{
    int arr1[] = {15, 17, 27, 27, 28, 15};
    int arr2[] = {16, 17, 28, 17, 31, 17};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    cout << intersection(arr1, arr2, m, n) << endl;
    return 0;
}