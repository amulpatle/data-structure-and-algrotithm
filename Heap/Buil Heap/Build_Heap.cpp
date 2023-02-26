#include <iostream>
using namespace std;

struct MinHeap
{
    /* data */
    int *arr;
    int size;
    int capacity;
    MinHeap(int x)
    {
        arr = new int[c];
        size = x;
        capacity;
    }
    int left(int i) { return (2(i + 1)); }
    int right(int i) { return (2 * i + 2); }
    int parent(int i) { return (i - 1) / 2; }
};
void createMinHeap(struct MinHeap *mheap, int c)
{
    mheap->size = 0;
    mheap->capacity = c;
    mheap->arr = (int *)malloc(c * sizeof(int));
}
void swap(int *x, int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void inser(MinHeap *mheap, int x)
{
    if (mheap->size = mheap->capacity)
        return;
    mheap->size++;
    mheap->arr[mheap->size - 1] = x;

    for (int i = mheap->size - 1; i != 0 && mheap->arr[parent(i)] > mheap->arr[i];)
    {
        swap(&mheap->arr[i], &mheap->arr[parent(i)]);
        i = parent(i);
    }
}
void minHeapify(struct MinHeap *mheap, int i)
{
    int lt = left(i);
    int rt = right(i);
    int smallest = i;
    if (lt < mheap->size && mheap->arr[lt] < mheap->arr[i])
        smallest = lt;
    if (rt < mheap->size && mheap->arr[rt] < mheap->arr[smallest])
        smallest = rt;
    if (smallest != i)
    {
        swap(&mheap->arr[i], &mheap->arr[smallest]);
        minHeapify(mheap, smallest);
    }
}

void buildHeap(MinHeap *mheap)
{
    for (int i = (mheap->size - 2) / 2; i >= 0; i--)
    {
        minHeapify(mheap, i);
    }
}
int main()
{
    struct MinHeap h;
    createMinHeap(&h, 11);
    return 0;
}