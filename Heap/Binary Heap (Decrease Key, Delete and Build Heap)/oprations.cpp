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
    void createMinHeap(struct MinHeap *mheap, int c)
    {
        mheap->size = 0;
        mheap->capacity = c;
        mheap->arr = (int *)malloc(c * sizeof(int));
    }

    int left(int i) { return (2 * i + 1); }
    int right(int i) { return (2 * i + 2); }
    int parent(int i) { return (i - 1) / 2; }
    void swap(int *x, int *y)
    {
        int t = *x;
        *x = *y;
        *y = t;
    }
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
    int Extract(MinHeap *mheap)
    {
        if (mHeap->size == 0)
            return INT_MAX;
        a if (mHeap->size == 1)
        {
            mHeap->size--;
            return mHeap->arr[size];
        }
        swap(mHeap->arr[0], mHeap->arr[size - 1]);
        mHeap->size--;
        Heapify(0);
        return mHeap->arr[size];
    }
    void decreaseKey(MinHeap *mHeap, int i, int x)
    {
        mHeap->arr[i] = x;
        while (i != 0 && mHeap->arr[parent(i)] > mHeap->arr[i])
        {
            swap(&mHeap->arr[i], mHeap->arr[parent(i)]);
            i = parent(i);
        }
    }
    void deleteKey(Minheap *mheap, int i)
    {
        decreaseKey(mheap, i, INT_MIN);
        Extract(mheap);
    }
};

int main()
{
    struct MinHeap h;
    createMinHeap(&h, 11);
    insert(&h, 3);
    insert(&h, 2);
    deleteKey(&h, 0);
    insert(&h, 15);
    insert(&h, 20);
    printf("%d\n", extractMin(&h));
    decreaseKey(&h, 2, 1);
    printf("%d\n", extractMin(&h));
    return 0;
}