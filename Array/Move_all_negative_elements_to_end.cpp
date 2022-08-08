#include <iostream>
using namespace std;
int main()
{
    int temp;
    int arr[8] = {1, -1, 3, 2, -7, -5, 11, 6};
    for (int i = 0; i < 8; i++)
    {
        for (int j = i; j < 8; j++)
        {
            if (arr[i] < 0)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}