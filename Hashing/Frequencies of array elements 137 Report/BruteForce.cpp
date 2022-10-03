#include <bits/stdc++.h>
using namespace std;
void countFreq(int arr[], int n)
{
    // make N size of boolien vector
    // mark all element as not visited
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true)
        {
            continue;
        }
        int cnt = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited[j] = true;
                cnt++;
            }
        }
        cout << arr[i] << " frequency : " << cnt << endl;
    }
}
int main()
{

    int arr[] = {10, 20, 20, 10, 10, 20, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}