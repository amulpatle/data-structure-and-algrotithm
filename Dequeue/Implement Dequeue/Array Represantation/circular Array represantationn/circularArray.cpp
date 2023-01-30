#include <iostream>
using namespace std;

int main()
{
    int arr[] = {6, 5, 2, 1, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int small_index;
    int p = k;
    int count = 0;
    int q = k;
    for (int i = 0; i < k; i++)
    {
        int small = arr[i];

        for (int j = k; j > 0; j--)
        {
            if (small > arr[j])
            {
                small = arr[j];
                small_index = j;
                        }
            if (p == k)
            {
                int temp = arr[i];
                arr[i] = arr[small_index];
                arr[small_index] = temp;
                count++;
                p--;
            }
        }
    }
    cout << count << endl;
    return 0;
}