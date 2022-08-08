#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    int x = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = x;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}