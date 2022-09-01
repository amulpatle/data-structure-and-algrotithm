#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Enter Number and it's power value :" << endl;
    int nn = n;
    cin >> x >> n;
    float ans = 1.0;
    if (n >= 0)
    {
        for (int i = 0; i < n; i++)
        {
            ans = ans * x;
        }
        cout << ans;
    }
    if (n < 0)
    {
        ans = ans * x;
        for (int i = 0; i > n; i--)
        {
            ans = ans / x;
        }
        cout << ans;
    }
    return 0;
}