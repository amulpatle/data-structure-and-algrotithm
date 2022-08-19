#include <bits/stdc++.h>
using namespace std;
void Set_zeros(vector<vector<int>> &arr)
{
    int col0 = 1;
    int n = arr.size();
    int m = arr[0].size();

    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == 0)
            col0 = 0;
        for (int j = 1; j < m; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = m - 1; j >= 1; j--)
        {
            if (arr[i][0] == 0 || arr[0][j] == 0)
            {
                arr[i][j] = 0;
            }
        }
        if (col0 == 0)
        {
            arr[i][0] = 0;
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