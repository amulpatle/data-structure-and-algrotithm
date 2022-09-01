#include <bits/stdc++.h>
using namespace std;
// bool searchElement(vector<vector<int>> &arr, int key)
// {
//     if (!arr.size())
//         return false;

//     int n = arr.size();
//     int m = arr[0].size();
//     int low = 0;
//     int hi = (n * m) - 1;
//     while (low <= hi)
//     {
//         int mid = (low + (hi - low) / 2);
//         if (arr[mid / m][mid % m] == key)
//         {
//             return true;
//         }
//         if (arr[mid / m][mid % m] < key)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             hi = mid - 1;
//         }
//     }
//     return false;
// }
bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    if (matrix.size() == 0)
        return false;

    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0;
    int high = (n * m) - 1;

    while (low <= high)
    {
        int mid = (low + (high - low) / 2);
        if (matrix[mid / m][mid % m] == target)
            return true;

        if (matrix[mid / m][mid % m] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return false;
}
int main()
{
    vector<vector<int>> arr = {{3, 12, 9},
                               {5, 2, 89},
                               {90, 45, 22}};
    int key;
    cout << "Enter Which element do you searching for " << endl;
    cin >> key;
    cout << searchMatrix(arr, key);

    return 0;
}