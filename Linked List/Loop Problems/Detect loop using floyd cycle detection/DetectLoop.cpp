#include <iostream>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

bool isLoop(Node *head)
{

    Node *fast_p = head;
    Node *slow_p = head;

    while (fast_p != NULL && slow_p != NULL)
    {
        fast_p = fast_p->next->next;
        slow_p = slow_p->next;
        if (fast_p == slow_p)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    Node *head = new Node(15);
    head->next = new Node(10);
    head->next->next = new Node(12);
    head->next->next->next = new Node(20);
    head->next->next->next->next = head->next;

    if (isLoop(head))
    {
        cout << "Loop Found" << endl;
    }
    else
        cout << "Loop Not found" << endl;
    return 0;
}