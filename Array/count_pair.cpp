#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int k = 6;
    int count = 0;
    int sum = 0;
    int arr[n] = {1, 5, 7, 1};

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] + arr[j] == k)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}