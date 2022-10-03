#include <bits/stdc++.h>
using namespace std;
vector<int> Twosum(vector<int> &nums, int target)
{
    vector<int> ans;
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mpp.find(target - nums[i]) != mpp.end())
        {
            ans.push_back(mpp[target - nums[i]]);
            ans.push_back(i);
            return ans;
        }
        mpp[nums[i]] = i;
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 7, 11, 15};

    int target = 18;
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> s = Twosum(arr, target);
    for (int i = 0; i < s.size(); i++)
        cout << s[i] << " ";
    return 0;
}