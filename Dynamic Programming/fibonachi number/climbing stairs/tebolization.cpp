#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter stairs No.";
    cin >> x;

    int prev = 1;
    int prev1 = 1;
    for (int i = 2; i <= x; i++)
    {
        int curr_i = prev + prev1;
        prev1 = prev;
        prev = curr_i;
    }

    cout << prev;
    return 0;
}