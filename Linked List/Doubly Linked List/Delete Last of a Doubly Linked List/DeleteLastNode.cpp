#include <iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        prev = NULL;
        next = NULL;
        data = x;
    }
};
Node *deleteNode(Node *head)
{
    if (head == NULL && head->next == NULL)
        return NULL;

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
}
int main()
{

    Node *head = new Node(45);

    Node *temp1 = new Node(56);

    Node *temp2 = new Node(87);

    head->next = temp1;
    temp1->prev = head;

    temp1->next = temp2;
    temp2->prev = temp1;

    head = deleteNode(head);

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}