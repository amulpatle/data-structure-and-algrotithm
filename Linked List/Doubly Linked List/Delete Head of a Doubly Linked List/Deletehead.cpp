#include <iostream>
using namespace std;
struct Node
{
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
Node *Delete_Head_Node(Node *head)
{

    if (head == NULL && head->next == NULL)
        return NULL;
    else
    {
        Node *temp = head;

        head = head->next;
        head->prev = NULL;

        delete temp;
    }
    return head;
}
int main()
{

    Node *head = new Node(45);

    Node *temp1 = new Node(56);

    Node *temp2 = new Node(87);

    head->next = temp1;
    temp1->prev = head;

    temp1->next = temp2;
    temp2->prev = temp1;
    head = Delete_Head_Node(head);

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";

        temp = temp->next;
    }
    return 0;
}