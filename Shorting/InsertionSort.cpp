// In this algorithm we are string form second Index

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {5, 4, 6, 4, 3, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After sorting " << endl;

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i]; // 4
        int j;
        j = i - 1; // 5
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}