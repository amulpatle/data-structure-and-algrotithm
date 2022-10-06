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
// Node *Reverse(Node *head)
// {
//     Node *temp = head;
//     if (head == NULL)
//     {
//         return head;
//     }
//     else
//     {
//         temp = Reverse(temp->next);
//         Node *curr = head->next;
//         curr->next = head;
//         temp->next = NULL;
//         return temp;
//     }
// }

/*
Node *recRevL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *rest_head = recRevL(head->next);
    Node *rest_tail = head->next;
    rest_tail->next = head;
    head->next = NULL;
    return rest_head;
}
*/

Node *Reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *temp = Reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return temp;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printlist(head);
    head = Reverse(head);
    printlist(head);
    return 0;
}