#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    // cin >> n;
    int x;
    int arr[n] = {6, 6, 3, 3, 10, 10, 10};
    int count = 0;
    // cout << " Enter element of Arrey" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[n];
    // }

    cout << "Enter an integer" << endl;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    cout << "frequency of x is : " << count << endl;

    return 0;
}