#include <iostream>
using namespace std;

class solution
{
public:
    void sort(int n, int *arr)
    {
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high)
        {
            switch (arr[mid])
            {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
            }
        }
    }
};
int main()
{
    int N = 5;
    int arr[N] = {0, 2, 1, 2, 0};

    solution s;
    s.sort(N, arr);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}