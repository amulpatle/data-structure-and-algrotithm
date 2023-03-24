#include <bits/stdc++.h>
using namespace std;
int orangesRotting(vector<vector<int>> &grid)
{
    // Code here
    int n = grid.size();
    int m = grid[0].size();
    int cntFresh;

    // { {row,col} , time}
    queue<pair<pair<int, int>, int>> q;
    int visited[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 2)
            {
                visited[i][j] == 2;
                q.push({{i, j}, 0});
            }
            else
            {
                visited[i][j] = 0;
            }
            // count fresh oragens
            if (grid[i][j] == 1)
                cntFresh++;
        }
    }

    int drow[] = {-1, 0, +1, 0};
    int dcol[] = {0, 1, 0, -1};
    int tm = 0;
    int cnt = 0;

    while (!q.empty())
    {
        int r = q.front().first.first;
        int c = q.front().first.second;
        int t = q.front().second;
        tm = max(tm, t);
        q.pop();
        for (int i = 0; i < 4; i++)
        {

            int nrow = r + drow[i];
            int ncol = c + dcol[i];

            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && visited[nrow][ncol] == 0 &&
                grid[nrow][ncol] == 1)
            {
                q.push({{nrow, ncol}, t + 1});
                // Mark as rotten
                visited[nrow][ncol] = 2;
                cnt++;
            }
        }
    }
    if (cnt != cntFresh)
        return -1;
    return tm;
}
int main()
{

    vector<vector<int>> grid{{0, 1, 2}, {0, 1, 2}, {2, 1, 1}};

    int ans = orangesRotting(grid);
    cout << ans << "\n";

    return 0;
}