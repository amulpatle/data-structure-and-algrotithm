#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << " Enter Number and it's power number " << endl;
    cin >> x >> n;
    int nn = n;
    float ans = 1.0;
    while (nn)
    {
        if (nn % 2)
        {
            ans = ans * x;
            nn = nn - 1;
        }
        else
        {
            x = x * x;
            nn = nn / 2;
        }
    }
    cout << ans << endl;
    return 0;
}