#include <bits/stdc++.h>
using namespace std;
vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    // Your code here
    vector<int> ans;
    int i = 0;
    int j = 1;
    int sum = arr[i];

    while (j != n)
    {
        if (s > sum)

        {

            if ((sum + arr[j + 1]) < s)
            {
                sum = sum + arr[j];
                j++;
            }
        }

        if (s < sum)
        {
            sum = sum - arr[i];
            i++;
            sum = arr[i] + sum;
        }
        if (sum == s)
        {
            ans.push_back(i);
            ans.push_back(j);

            return ans;
        }
    }
    ans.push_back(-1);
    return ans;
}
int main()
{
    int N = 5;
    int S = 12;
    vector<int> A{1, 2, 3, 7, 5};
    subarraySum(A, N, S);

    return 0;
}