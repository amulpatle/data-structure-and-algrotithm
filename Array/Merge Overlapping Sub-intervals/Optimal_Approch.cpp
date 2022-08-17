#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> interval)
{
    vector<vector<int>> merged;
    for (int i = 0; i < interval.size(); i++)
    {

        if (merged.empty() || merged.back()[1] < interval[i][0])
        {
            vector<int> v = {
                interval[i][0],
                interval[i][1]};

            merged.push_back(v);
        }
        else
        {
            merged.back()[1] = max(merged.back()[1], interval[i][0]);
        }
    }

    return merged;
}

int main()
{
    vector<vector<int>> arr;
    arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
    vector<vector<int>> ans = merge(arr);

    cout << "Merged Overlapping Intervals are " << endl;

    for (auto it : ans)
    {
        cout << it[0] << " " << it[1] << "\n";
    }
    return 0;
}