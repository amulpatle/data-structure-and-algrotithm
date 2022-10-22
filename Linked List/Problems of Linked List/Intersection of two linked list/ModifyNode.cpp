#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    int flag;

    Node(int x)
    {
        data = x;
        next = NULL;
        flag = 0;
    }
};

int getIntersection(Node *head1, Node *head2)
{
    for (Node *curr = head1; curr != NULL; curr = curr->next)
    {
        head1->flag = 1;
        head1 = head1->next;
    }
    for (Node *curr = head2; curr != NULL; curr = curr->next)
    {
        if (head2->flag != 1)
        {
            head2->flag = 1;
            head2 = head2->next;
        }
        else
        {
            return head2->data;
        }
    }
    return -1;
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

    cout << getIntersection(head1, head2);
    return 0;
}
