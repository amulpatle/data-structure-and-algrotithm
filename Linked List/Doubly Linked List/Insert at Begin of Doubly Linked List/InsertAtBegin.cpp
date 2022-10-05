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
        data = x;
        prev = NULL;
        next = NULL;
    }
};

Node *insertAtBegin(Node *head, int x)
{
    Node *curr = new Node(x);

    if (head == NULL)
    {
        return curr;
    }

    head->prev = curr;

    curr->next = head;

    return curr;
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

    head = insertAtBegin(head, 23);
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}