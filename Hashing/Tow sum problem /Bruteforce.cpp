#include <iostream>
using namespace std;
void TowSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (target == (arr[i] + arr[j]))
            {
                cout << i << " " << j << endl;
                return;
            }
        }
    }
    cout << "not found" << endl;
}
int main()
{
    int arr[] = {2, 7, 11, 15};
    int target = 18;
    int n = sizeof(arr) / sizeof(arr[0]);
    TowSum(arr, n, target);
    return 0;
}