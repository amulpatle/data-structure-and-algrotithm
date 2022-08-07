#include <iostream>
using namespace std;
int Findmax(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << Findmax(arr, n);
    return 0;
}