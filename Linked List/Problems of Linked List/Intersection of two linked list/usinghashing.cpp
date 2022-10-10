#include <bits/stdc++.h>
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

int Intersection(Node *head1, Node *head2)
{
    unordered_set<int> us;
    for (Node *curr = head1; curr != NULL; curr = curr->next)
    {
        us.insert(curr->data);
    }

    for (Node *temp = head2; temp != NULL; temp = temp->next)
    {
        if (us.find(temp->data) != us.end())
        {
            return temp->data;
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

    cout << Intersection(head1, head2);

    return 0;
}
