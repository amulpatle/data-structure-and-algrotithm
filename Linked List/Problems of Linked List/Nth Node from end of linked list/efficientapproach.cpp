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

void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

void NthNode(Node *head, int k)
{
    if (head == NULL)
        return;

    Node *first = head;
    Node *second = head;
    for (int i = 0; i < k; i++)
        first = first->next;

    while (first != NULL)
    {
        first = first->next;
        second = second->next;
    }
    cout << second->data;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printlist(head);
    cout << "Nth node from end of Linked List: ";
    NthNode(head, 3);
    cout << endl;

    return 0;
}