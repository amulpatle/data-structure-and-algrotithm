/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            ans += arr[i + 1] - arr[i];
            arr[i + 1] = ans;
        }
        else if (arr[i] > 0)
        {
            ans += arr[i] - arr[i + 1];
            arr[i + 1] = ans;
        }
    }
    cout << ans << endl;
    return 0;
}
