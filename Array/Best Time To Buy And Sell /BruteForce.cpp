#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    int maxprofit = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] < arr[j])
            {
                maxprofit = max(arr[j] - arr[i], maxprofit);
            }
        }
    }

    cout << maxprofit << endl;
    return 0;
}