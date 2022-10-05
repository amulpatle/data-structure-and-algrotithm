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

bool isloop(Node *head)
{
    for (Node *temp = head; temp != NULL; temp = temp->next)
    {
        for (Node *curr = head; curr != NULL; curr = curr->next)
        {
            if (temp == curr)
            {
                return true;
            }
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

    if (isloop(head))
    {
        cout << "Loop Found" << endl;
    }
    else
        cout << "Loop Not found" << endl;
    return 0;
}