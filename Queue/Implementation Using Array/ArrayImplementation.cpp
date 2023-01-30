#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
    int front, size, rear;
    unsigned capacity;
    int *array;
};

Queue *createQueue(unsigned capacity)
{
    Queue *queue = new Queue();
    queue->front = queue->size = 0;
    queue->capacity = capacity;

    queue->rear = capacity - 1;
    queue->array = new int[(queue->capacity * sizeof(int))];
}

int isFull(Queue *queue)
{
    if (queue->size == queue->capacity)
        return true;
}
void enqueue(Queue *queue, int item)
{
    if (isFull(queue))
        return;

    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->size = queue->size + 1;
    queue->array[queue->rear] = item;

    cout << item << "enqued to queue\n";
}

int dequeue(Queue *queue)
{
    if (queue->size == -1)
        return INT_MIN;

    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}
int main()
{

    return 0;
}