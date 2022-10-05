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

void circularLL_Traversal(Node *head)
{

    Node *curr = head;
    while (curr->next != head)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
// circula Linked list Traversal using do while
// for corner cases like , when we have only one node in circular linked list
void CLL_traversal(Node *head)
{
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
    } while (curr->next != head);
}
int main()
{

    return 0;
}