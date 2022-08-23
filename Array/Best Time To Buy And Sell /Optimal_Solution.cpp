#include <bits/stdc++.h>
using namespace std;
int Maxprofit(vector<int> arr)
{
    int profit = 0;
    int maxp = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        maxp = min(maxp, arr[i]);
        profit = max(profit, arr[i] - maxp);
    }
    return profit;
}
int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << " Max Profit is : " << Maxprofit(arr) << endl;

    return 0;
}