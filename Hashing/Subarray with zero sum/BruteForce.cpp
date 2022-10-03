#include <iostream>
using namespace std;
bool zeroSum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int currsum = 0;
        for (int j = i; j < n; j++)
        {
            currsum += arr[j];
            if (currsum == 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << zeroSum(arr, n) << endl;

    return 0;
}