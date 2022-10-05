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

Node *DeleteKthNode(Node *head, int k)
{
    if (head == NULL && head->next == head)
    {
        return NULL;
    }
    else
    {
        Node *curr = head;
        for (int i = 0; i < k - 2; i++)
        {
            curr = curr->next;
        }
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
        return temp;
    }
}

int main()
{

    return 0;
}