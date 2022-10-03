#include <bits/stdc++.h>
using namespace std;
void countDistinct(int arr[], int n, int k)
{
    unordered_map<int, int> mp;
    vector<int> ans;
    int j = 0, i = 0;
    while (j < n)
    {
        mp[arr[j]]++;
        if (j - i + 1 == k)
        {
            ans.push_back(mp.size());
            mp[arr[i]]--;
            if (mp[arr[i]] == 0)
                mp.erase(arr[i]);

            i++;
        }
        j++;
    }
    for (auto x : ans)
        cout << x << " ";
}
int main()
{
    int arr[] = {1, 2, 1, 3, 4, 2, 3}, k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    countDistinct(arr, n, k);

    return 0;
}