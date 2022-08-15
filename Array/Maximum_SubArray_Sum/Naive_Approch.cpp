#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums, vector<int> &SubArray)
{
    int max_sum = INT_MIN;
    int n = nums.size();
    if (n == 1)
    {
        return nums[0];
    }
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
                sum = sum + nums[k];

            if (sum > max_sum)
            {
                SubArray.clear();
                max_sum = sum;
                SubArray.push_back(i);
                SubArray.push_back(j);
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