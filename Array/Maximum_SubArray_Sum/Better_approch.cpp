#include <bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int> &nums, vector<int> &subarray)
{
    int max_sum = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        int curr_sum = 0;
        for (int j = i; j < nums.size(); j++)
        {
            curr_sum += nums[j];
            if (curr_sum > max_sum)
            {
                subarray.clear();
                max_sum = curr_sum;
                subarray.push_back(i);
                subarray.push_back(j);
            }
        }
    }
    return max_sum;
}
int main()
{
    vector<int> arr{-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> SubArray;
    int lon = maxSubArray(arr, SubArray);
    cout << "The longest sunarray with maximum sum is " << lon << endl;
    cout << "The subarray is " << endl;
    for (int i = SubArray[0]; i <= SubArray[1]; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}