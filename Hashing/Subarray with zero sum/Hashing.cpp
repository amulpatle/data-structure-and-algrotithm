#include <bits/stdc++.h>
using namespace std;
bool zeroSum(int arr[], int n)
{
    unordered_set<int> us;
    int prifixSum = 0;
    us.insert(0);
    for (int i = 0; i < n; i++)
    {
        prifixSum += arr[i];
        if (us.find(prifixSum) != us.end())

            return true;

        us.insert(prifixSum);
    }
    return false;
}
int main()
{
    int arr[] = {5, 3, 9, 2, 5, 7, -1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << zeroSum(arr, n) << endl;

    return 0;
}