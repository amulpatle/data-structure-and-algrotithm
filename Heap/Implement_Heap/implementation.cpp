#include <iostream>
using namespace std;
struct MinHeap
{
    /* data */
    int *arr;
    int size;
    int capacity;

public:
    MinHeap(int c)
    {
        arr = new int[c];
        size = 0;
        capacity = c;
    }
    int left(int i) { return (2 * i + 1); }
    int right(int i) { return (2 * i + 2); }
    int parent(int i) { return (i - 1) / 2; }
};

int main()
{
    MinHeap h(44);
    return 0;
}