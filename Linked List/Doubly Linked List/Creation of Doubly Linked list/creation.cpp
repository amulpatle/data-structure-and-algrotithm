#include <iostream>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        prev = NULL;
        next = NULL;
        data = x;
    }
};

int main()
{

    Node *head = new Node(90);

    Node *temp1 = new Node(56);

    Node *temp2 = new Node(87);

    head->next = temp1;
    temp1->prev = head;

    temp1->next = temp2;
    temp2->prev = temp1;

    return 0;
}