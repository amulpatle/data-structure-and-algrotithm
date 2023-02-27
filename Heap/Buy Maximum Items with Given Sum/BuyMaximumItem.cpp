#include <iostream>
#include <queue>
using namespace std;

int buyMaximumItem(int arr[], int n, int k)
{
    int res = 0;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
        pq.push(arr[i]);

    for (int i = 0; i < n; i++)
    {
        if (k > 0 && k > pq.top())
        {
            res++;
            k = k - pq.top();
            pq.pop();
        }
    }
    return res;
}
int main()
{
    int n = 5;
    int cost[n] = {1, 12, 5, 111, 200};
    int sum = 10;

    cout << buyMaximumItem(cost, n, sum) << endl;
    return 0;
}