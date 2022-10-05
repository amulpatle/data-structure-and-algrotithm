#include <iostream>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *InsertAtHead(Node *head, int x)
{
    Node *temp = new Node(x);

    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        return temp;
    }
    else
    {
        temp->prev = head->prev;
        temp->next = head;
        head->prev->next = temp;
        head->prev = temp;
    }
    return temp;
}

int main()
{

    return 0;
}