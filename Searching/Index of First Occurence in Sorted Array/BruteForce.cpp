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
        if (first == -1)
        {
            if (arr[i] == x)
            {
                first = i;
            }
        }
        if (arr[i] == x)
        {
            if (arr[i] != arr[i + 1])
            {
                last = i;
            }
        }
    }
    cout << "First occurence = " << first << endl;
    cout << "Last occurence = " << last;

    return 0;
}
// Time Complexity : O(n)
// Auxiliary Space : O(1)