// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "hellow world";
//     return 0;
// }

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter arrey size" << endl;

    cin >> n;
    int x;
    x = n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m = 2;
    int i = 0;

    while (i < m)
    {
        i++;
    }

    int temp;
    int temp1;
    while (i < n)
    {

        temp = arr[i];
        temp1 = arr[n - 1];
        arr[i] = temp1;
        arr[n - 1] = temp;
        i++;
        n--;
    }

    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}