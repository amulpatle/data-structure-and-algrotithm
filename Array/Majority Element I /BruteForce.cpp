#include <iostream>
#include <vector>
using namespace std;
int findMajority(vector<int> nums, int n)
{
    // check whether `nums[i]` is a majority element or not
    for (int i = 0; n && i <= n / 2; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] == nums[i])
            {
                count++;
            }
        }

        if (count > n / 2)
        {
            return nums[i];
        }
    }

    return -1;
}
int main()
{

    vector<int> arr = {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2};
    int n;
    n = arr.size();
    int a = findMajority(arr, n);
    cout << a;
    return 0;
}
