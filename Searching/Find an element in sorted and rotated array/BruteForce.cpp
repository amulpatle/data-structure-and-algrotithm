#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index :" << i << endl;
            flag = true;
            break;
        }
    }
    if (flag == false)
    {
        cout << "Element is not found" << endl;
    }
    return 0;
}