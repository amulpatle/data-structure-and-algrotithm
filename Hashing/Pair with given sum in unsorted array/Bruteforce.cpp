#include <iostream>
using namespace std;
int PairWithSumX(int arr[], int x, int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < n; j++)
        {
            sum = arr[i] + arr[j];
            if (sum == x)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int arr[] = {3, 8, 4, 7, 6, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 14;
    cout << PairWithSumX(arr, x, n) << endl;
    return 0;
}