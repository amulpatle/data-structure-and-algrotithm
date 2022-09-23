#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainarreyindex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainarreyindex++];
    }
    mainarreyindex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainarreyindex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainarreyindex = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainarreyindex++] = first[index1++];
        }
        else
        {
            arr[mainarreyindex++] = second[index2++];
        }
    }
    while (index1 < len1)
    {
        arr[mainarreyindex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainarreyindex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}
void mergesort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);

    mergesort(arr, mid + 1, e);

    merge(arr, s, e);
}
int main()
{

    int arr[] = {5, 4, 6, 4, 3, 6, 8};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "After sorting " << endl;
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}