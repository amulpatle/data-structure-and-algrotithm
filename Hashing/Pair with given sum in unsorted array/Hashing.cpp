#include <bits/stdc++.h>
using namespace std;
int PairWithSumX(int arr[], int x, int n)
{
    unordered_set<int> us;
    for (int i = 0; i < n; i++)
    {
        if (us.find(x - arr[i]) != us.end())
            return 1;

        us.insert(arr[i]);
    }
    return 0;
}
int main()
{
    int arr[] = {3, 8, 4, 7, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 14;
    cout << PairWithSumX(arr, x, n) << endl;
    return 0;
}