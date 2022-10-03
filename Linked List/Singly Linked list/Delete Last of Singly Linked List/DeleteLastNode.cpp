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
Node *DeletelastNode(Node *head)
{
    Node *temp = head;
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
    return head;
}

int main()
{

    return 0;
}