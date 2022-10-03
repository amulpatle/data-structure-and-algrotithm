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
void Rtraversal(Node *head)
{
    if (head == NULL)
        return;

    cout << head->data << " ";
    Rtraversal(head->next);
}
int main()
{
    Node *head = new Node(6);

    Rtraversal(head);
    return 0;
}