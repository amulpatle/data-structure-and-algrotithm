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

int pos = 1;
int Rsearch(Node *head, int x)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == x)
    {
        return pos;
    }
    Rsearch(head->next, x);
}

int main()
{
    Node *head = new Node(6);

    cout << Rsearch(head, 56) << endl;
    return 0;
}