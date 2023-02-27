#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> kLargest(int arr[], int n, int k)
{
    // code here
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
        pq.push(arr[i]);

    for (int i = k; i < n; i++)
    {
        if (pq.top() < arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
        else
            continue;
    }
    while (!pq.empty())
    {
        ans.push_back(pq.top());
        pq.pop();
    }
    return ans;
}
int main()
{
    int arr[] = {11, 3, 2, 1, 15, 5, 4, 45, 88, 96, 50, 45};

    int size = sizeof(arr) / sizeof(arr[0]);

    int k = 3;

    vector<int> ans;
    ans = kLargest(arr, size, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}