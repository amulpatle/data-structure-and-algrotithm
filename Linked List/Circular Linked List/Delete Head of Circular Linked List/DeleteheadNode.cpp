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

// Time complexity is : O(N)
Node *DeleteHead(Node *head)
{
    Node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
}
// Time complexity is : O(1)
Node *DeleteNode(Node *head)
{
    if (head == NULL && head->next == NULL)
    {
        return NULL;
    }
    else
    {
        head->data = head->next->data;
        Node *temp = head->next;

        head->next = head->next->next;
        delete temp;
    }
    return head;
}
int main()
{

    return 0;
}