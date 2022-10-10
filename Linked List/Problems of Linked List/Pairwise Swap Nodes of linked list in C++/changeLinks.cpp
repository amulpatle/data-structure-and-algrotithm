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

Node *Pairwiseswap(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    while (curr != NULL && curr->next != NULL)
    {
        Node *temp = curr->next->next;
        curr->next->next = prev;
        curr->next = temp;
        prev->next = curr;
    }
}

int main()
{

    return 0;
}