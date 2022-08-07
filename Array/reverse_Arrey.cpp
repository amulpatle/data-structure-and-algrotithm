#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cout << "Enter length of Arrey : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter Element of arrey : " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << "After shorting" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}