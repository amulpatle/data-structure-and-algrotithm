#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
struct Queue
{
    Node *front, *rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
        void enque(int x)
        {
            Node *temp = new Node(x);

            if (front == NULL)
            {
                front = rear = temp;
                return;
            }
            rear->nxet = temp;
            rear = temp;
        }

        void deque()
        {
            if (fornt == NULL)
                return;

            Node *temp = front;
            front = front->next;

            if (front == NULL)
                rear = NULL;

            delete (temp);
        }
    }
};

int main()
{

    return 0;
}