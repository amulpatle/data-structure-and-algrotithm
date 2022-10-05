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
Node *InsetElement(Node *head, int x, int pos)
{
    Node *temp = new Node(x);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for (int i = 0; i < pos - 2 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
        return head;

    temp->next = curr->next;
    curr->next = temp;

    return head;
}
int main()
{
    Node *head = new Node(78);

    head = InsetElement(head, 65, 2);
    head = InsetElement(head, 4, 2);
    head = InsetElement(head, 69, 2);
    head = InsetElement(head, 91, 1);
    head = InsetElement(head, 10, 4);

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}