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

int main()
{
    Node *head = new Node(89);
    Node *temp1 = new Node(77);
    Node *temp2 = new Node(43);

    head->next = temp1;

    temp1->next = temp2;

    temp2->next = head;

    return 0;
}