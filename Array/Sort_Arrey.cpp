#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int temp;

    int arr[n] = {55, 4, 633, 2, 1};

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = arr[i];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}