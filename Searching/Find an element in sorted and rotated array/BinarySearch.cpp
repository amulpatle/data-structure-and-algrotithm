#include <iostream>
using namespace std;
int BinarySearch(int arr[], int low, int high, int target)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;

        if (arr[low] <= arr[mid])
        {
            if (target <= arr[mid] && arr[low] <= target)
            {
                high = mid - 1;
            }
            low = mid + 1;
        }
        else
        {
            if (target >= arr[mid] && target <= arr[high])
            {
                low = mid + 1;
            }
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    cout << BinarySearch(arr, 0, n, key) << endl;
    return 0;
}