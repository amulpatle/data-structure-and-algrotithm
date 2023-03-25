#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> nearest(vector<vector<int>> grid)
{

    int n = grid.size();
    int m = grid[0].size();
    vector<vector<int>> visited(n, vector<int>(m, 0));
    vector<vector<int>> distance(n, vector<int>(m, 0));

    queue<pair<pair<int, int>, int>> q;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
            {
                visited[i][j] = 1;
                q.push({{i, j}, 0});
            }
            else
            {
                visited[i][j] = 0;
            }
        }
    }

    int delrow[] = {-1, 0, +1, 0};
    int delcol[] = {0, +1, 0, -1};

    while (!q.empty())
    {
        int row = q.front().first.first;
        int col = q.front().first.second;
        int dis = q.front().second;

        q.pop();
        distance[row][col] = dis;

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && visited[nrow][ncol] == 0)
            {
                q.push({{nrow, ncol}, dis + 1});
                visited[nrow][ncol] = 1;
            }
        }
    }
    return distance;
}

int main()
{
    vector<vector<int>> grid{
        {0, 1, 1, 0},
        {1, 1, 0, 0},
        {0, 0, 1, 1}};

    vector<vector<int>> ans = nearest(grid);

    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << " ";
        cout << "\n";
    }

    return 0;
}