#include <iostream>
using namespace std;
struct Deque
{
    int size, cap;
    int *arr;
    Deque(int c)
    {
        cap = c;
        size = 0;
        arr = new int[cap];
    }
    bool isfull() { return (size == cap); }
    bool isEmpty() { return (size == 0); }
    void insertRear(int x)
    {
        if (isfull())
            return;
        arr[size] = x;
        size++;
    }

    void deleteRear()
    {
        if (isEmpty())
            return;
        size--;
    }

    int getRear()
    {
        if (isEmpty())
            return -1;
        else
            return arr[(size - 1)];
    }

    void insertFront(int x)
    {
        if (isfull())
            return;
        for (int i = size - 1; i >= 0; i--)
            arr[i + 1] = arr[i];

        arr[0] = x;
        size++;
    }
    void deletefront()
    {
        if (isEmpty())
            return;
        for (int i = 0; i < size - 1; i++)
            arr[i] = arr[i + 1];

        size--;
    }
    int getfront()
    {
        if (isEmpty())
            return -1;
        else
            return arr[0];
    }
};

int main()
{
    Deque dq(5);
    // dq.insertFront(67);
    dq.insertFront(97);
    dq.insertFront(7);
    dq.insertRear(99);
    dq.insertRear(100);
    cout << dq.getRear();
    return 0;
}