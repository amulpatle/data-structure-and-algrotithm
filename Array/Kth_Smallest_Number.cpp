#include <iostream>
using namespace std;
int main()
{
    int n, k, temp;
    cout << "Enter size of arrey " << endl;
    cin >> n;
    int arr[n];
    cout << " Enter Element of Arrey " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter kth number " << endl;
    cin >> k;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout << arr[k];

    return 0;
}