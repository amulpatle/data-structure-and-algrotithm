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

int Search(Node *head, int x)
{
    Node *curr = head;
    int pos = 0;

    while (curr != NULL)
    {
        if (curr->data == x)
        {
            return pos;
        }
        curr = curr->next;
        pos++;
    }
    return -1;
}
int main()
{
    Node *head = new Node(34);
    cout << Search(head, 4) << endl;
    return 0;
}