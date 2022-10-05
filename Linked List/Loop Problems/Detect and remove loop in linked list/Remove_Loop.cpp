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

void RemoveLoop(Node *head)
{
    Node *slow_p = head, *fast_p = head;

    while (fast_p != NULL && fast_p->next != NULL)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next->next;
        if (slow_p == fast_p)
        {
            break;
        }
    }
    if (slow_p != fast_p)
    {
        return;
    }
    while (slow_p->next != fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p = fast_p->next;
    }
    fast_p->next = NULL;
}

int main()
{
    Node *head = new Node(15);
    head->next = new Node(10);
    head->next->next = new Node(12);
    head->next->next->next = new Node(20);
    head->next->next->next->next = head->next;
    RemoveLoop(head);
    return 0;
}