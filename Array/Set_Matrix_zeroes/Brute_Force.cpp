#include <bits/stdc++.h>
using namespace std;
void Set_zeros(vector<vector<int>> &Matrix)
{
    int row = Matrix.size(), col = Matrix[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (Matrix[i][j] == 0)
            {
                int ind = i + 1;
                while (ind < row)
                {
                    if (Matrix[ind][j] != 0)
                    {
                        Matrix[ind][j] = -1;
                    }
                    ind++;
                }
                ind = i - 1;
                while (ind >= 0)
                {
                    if (Matrix[ind][j] != 0)
                    {
                        Matrix[ind][j] = -1;
                    }
                    ind--;
                }
                ind = j + 1;
                while (ind < col)
                {
                    if (Matrix[i][ind] != 0)
                    {
                        Matrix[i][ind] = -1;
                    }
                    ind++;
                }
                ind = j - 1;
                while (ind >= 0)
                {
                    if (Matrix[i][ind] != 0)
                    {
                        Matrix[i][ind] = -1;
                    }
                    ind--;
                }
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (Matrix[i][j] == -1)
            {
                Matrix[i][j] = 0;
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