#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
    int n = sizeof(arr) / sizeof(int);
    int x = 2;
    int first = -1;
    int last = -1;
    for (int i = 0; i < n; i++)
    {
        if (x != arr[i])
        {
            continue;
        }
        if (first == -1)
            first = i;
        last = i;
    }

    if (first != -1)
        cout << "First Occurrence = " << first
             << "\nLast Occurrence = " << last;
    else
        cout << "Not Found";

    return 0;
}

// Time Complexity : O(n)
// Auxiliary Space : O(1)