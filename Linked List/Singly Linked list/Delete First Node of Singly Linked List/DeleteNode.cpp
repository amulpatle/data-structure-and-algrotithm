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

Node *DeleteFirstNode(Node *head)
{
    Node *temp = head->next;
    if (head == NULL)
        return NULL;

    delete head;
    return temp;
}

int main()
{
    Node *head = new Node(66);
    head = DeleteFirstNode(head);
    Node *temp = head;
    while (head != NULL)
    {
        cout << temp->data;
        temp = temp->next;
    }

    return 0;
}