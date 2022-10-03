#include <iostream>
using namespace std;
int count_distict_Element(int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
            cnt++;
    }
    return cnt;
}
int main()
{
    int arr[] = {15, 16, 27, 27, 28, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << count_distict_Element(arr, n);
    cout << endl;
    return 0;
}