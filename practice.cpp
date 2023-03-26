#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> removeDuplicates(vector<vector<int>> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            for (int k = 0; j < arr[i].size(); k++)
            {
                if (arr[j][j] == arr[j][k])
                    arr[j][k].erase(arr[j].begin() + k);
            }
        }
    }
    return arr;
}
int main()
{

    vector<vector<int>> arr = {{1, 2}, {4, 4}, {5, 5}};

    removeDuplicates(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); i++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // assdff;

    return 0;
}