#include <bits/stdc++.h>

using namespace std;
vector<int> Next_Greater_Element(int arr[], int n)
{
    stack<int> s;
    vector<int> v;
    s.push(arr[n - 1]);
    v.push_back(-1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int next_greater = s.empty() ? -1 : s.top();
        s.push(arr[i]);
        v.push_back(next_greater);
    }
    reverse(v.begin(), v.end());
    return v;
}
int main()
{
    int arr[] = {5, 15, 10, 8, 6, 12, 9, 18};
    int n = 8;
    for (int x : Next_Greater_Element(arr, n))
    {
        cout << x << " ";
    }
    return 0;
}
