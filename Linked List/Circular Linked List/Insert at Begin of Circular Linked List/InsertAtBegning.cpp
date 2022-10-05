#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Time complexity : O(N)
Node *InsertAtBegin(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
        temp->next = temp;

    Node *curr = head;
    while (curr->next != head)
        curr = curr->next;

    curr->next = temp;
    temp->next = head;

    return temp;
}

// Time complexity : O(1)
Node *Insert(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        temp->next = head->next;
        head->next = temp;

        int t = head->data;
        head->data = temp->data;
        temp->data = t;
    }
    return head;
}
int main()
{

    return 0;
}