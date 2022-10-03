#include <bits/stdc++.h>
using namespace std;
int count_distict_Element(int arr[], int n)
{
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]); // In unordered set Insert function never take duplicate values

    return s.size();
}
int main()
{
    int arr[] = {15, 16, 27, 27, 28, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << count_distict_Element(arr, n) << endl;

    return 0;
}