#include <iostream>
#include <stack>
using namespace std;
void Previous_Greater(int arr[], int n)
{
    stack<int> s;
    s.push(arr[0]);

    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && s.top() <= arr[i])
        {
            s.pop();
        }
        int pg = s.empty() ? -1 : s.top();
        cout << pg << " ";
        s.push(arr[i]);
    }
}
int main()
{
    int arr[] = {20, 30, 10, 5, 15};
    int n = 5;
    Previous_Greater(arr, n);
    return 0;
}