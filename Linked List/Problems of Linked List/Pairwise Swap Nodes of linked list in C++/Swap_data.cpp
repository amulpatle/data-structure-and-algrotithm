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

Node *pairwiseSwap(Node *head)
{
    for (Node *curr = head; curr != NULL && curr->next != NULL; curr = curr->next->next)
    {
        int temp = curr->data;
        curr->data = curr->next->data;
        curr->next->data = temp;
    }
    return head;
}

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

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    printlist(head);
    pairwiseSwap(head);
    printlist(head);

    return 0;
}