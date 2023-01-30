#include <iostream>
using namespace std;
void stock_span(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i - 1; j >= 0 && arr[j] <= arr[i]; j--)
        {

            count++;
        }
        cout << count << " ";
    }
}
int main()
{
    int arr[] = {18, 12, 13, 14, 11, 16};
    int n = 6;
    stock_span(arr, n);
    return 0;
}