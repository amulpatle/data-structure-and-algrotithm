#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr = {{3, 12, 9},
                               {5, 2, 89},
                               {90, 45, 22}};
    int key;
    cout << " which number do you searching for " << endl;
    cin >> key;
    bool flag = false;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i][j] == key)
            {
                cout << "Element found At index" << i << "," << j << endl;
                flag = true;
                break;
            }
        }
    }
    if (flag == false)
    {
        cout << "Element is not found in Matrix " << endl;
    }

    return 0;
}