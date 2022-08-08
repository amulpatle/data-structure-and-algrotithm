#include <iostream>
using namespace std;
int main()
{
    int n = 8;
    int k;
    int arr[n] = {15, 2, 4, 8, 9, 5, 10, 23};

    int count;
    for (int i = 0; i < n; i++)
    {
        count = arr[i];
        for (int j = i + 1; j < n; j++)
        {
            if (count == k)
            {
                cout << " Sum exist bitween " << i << " and " << j << endl;
            }
            if (count > k)
            {
                break;
            }
            count += arr[j];
        }
    }

    return 0;
}