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

int getcount(Node *head)
{
    int count = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }
    return count;
}
int _Intersection(int d, Node *head1, Node *head2)
{

    Node *curr = head1;
    for (int i = 0; i < d; i++)
    {
        curr = curr->next;
    }
    Node *temp = head2;
    while (curr != NULL && temp != NULL)
    {
        if (curr == temp)
        {
            return curr->data;
        }
        else
        {
            curr = curr->next;
            temp = temp->next;
        }
    }
    return -1;
}

int Intersection(Node *head1, Node *head2)
{

    int c1 = getcount(head1);
    int c2 = getcount(head2);
    if (c1 > c2)
    {
        int d = c1 - c2;
        return _Intersection(d, head1, head2);
    }
    else
    {
        int d = c2 - c1;
        return _Intersection(d, head2, head1);
    }
}

int main()
{
    Node *newNode;

    Node *head1 = new Node(10);

    Node *head2 = new Node(3);

    newNode = new Node(6);
    head2->next = newNode;

    newNode = new Node(9);
    head2->next->next = newNode;

    newNode = new Node(15);
    head1->next = newNode;
    head2->next->next->next = newNode;

    newNode = new Node(30);
    head1->next->next = newNode;

    head1->next->next->next = NULL;

    cout << Intersection(head1, head2);

    return 0;
}