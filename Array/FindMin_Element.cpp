#include <iostream>
#include <climits>
using namespace std;
int findMin(int arr[], int n)
{
    int Min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (Min > arr[i])
        {
            Min = arr[i];
        }
    }
    return Min;
}
int main()
{

    int n = 5;
    int arr[n] = {-4, 77, 99, -10, 55};
    cout << findMin(arr, n);

    return 0;
}