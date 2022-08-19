#include <bits/stdc++.h>
using namespace std;
void Set_zeros(vector<vector<int>> &arr)
{
    int n = arr.size();
    int m = arr[0].size();

    vector<int> row(n, -1);
    vector<int> col(m, -1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                row[i] = 0;
                col[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] == 0 || col[j] == 0)
            {
                arr[i][j] = 0;
            }
        }
    }
}
int main()
{
    vector<vector<int>> arr;
    arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    Set_zeros(arr);
    cout << "The Final Matrix is " << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[0].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}