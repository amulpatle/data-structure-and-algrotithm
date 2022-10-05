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
// Time Complexity : O(N)
Node *InsertAtEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == NULL)
    {
        temp->next = temp;
        return temp;
    }
    else
    {
        Node *curr = head;
        while (curr->next != head)

        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return head;
}
// Time Complexity : O(1)

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

        int t = temp->data;
        temp->data = head->data;
        head->data = t;
        return temp;
    }
}

int main()
{

    return 0;
}