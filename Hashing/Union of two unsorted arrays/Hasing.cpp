#include <bits/stdc++.h>
using namespace std;
int Union(int arr[], int arr2[], int m, int n)
{
    unordered_set<int> us;
    for (int i = 0; i < m; i++)
        us.insert(arr[i]);

    for (int i = 0; i < n; i++)
        us.insert(arr2[i]);

    return us.size();
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