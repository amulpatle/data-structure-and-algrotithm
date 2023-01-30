#include <iostream>
#include <stack>
using namespace std;

void stock_Span(int arr[], int n)
{
    stack<int> s;
    s.push(0);
    cout << 1 << " ";
    for (int i = 1; i < n; i++)
    {
        while (s.empty() == false && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        int span = s.empty() ? i + 1 : i - s.top();
        cout << span << " ";
        s.push(i);
    }
}

int main()
{
    int arr[] = {18, 12, 13, 14, 11, 16};
    int n = 6;
    stock_Span(arr, n);
    return 0;
}