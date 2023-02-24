#include <iostream>
using namespace std;
struct MinHeap
{
    /* data */
    int size;
    int *arr;
    int capacity;
    HeapMin(int c)
    {
        capacity = c;
        arr = new int[c];
        size = c;
    }
};
void Heapify(int i)
{
    int lh = left(i);
    int rh = right(i);
    int smallest = i;
    if (lh < size && arr[i] > arr[lh])
        smallest = lh;
    if (rh < size && arr[i] > arr[rh])
        smallest = rh;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        Heapify(smallest);
    }
}
int main()
{
    return 0;
}