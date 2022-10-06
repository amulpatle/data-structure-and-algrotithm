#include <iostream>
using namespace std;
// This Approch is only usefull only when linked list is sorted otherwise it will give wrong output
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
Node *RemoveDuplicate(Node *head)
{
    Node *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        if (curr->data == curr->next->data)
        { // 8 15 19 19 20 20 8
            Node *temp = curr->next;
            curr->next = curr->next->next;

            delete (temp);
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

// Node *push(Node *head, int data)
// {
//     Node *newNode = new Node(data);
//     head->next = newNode;
//     newNode->next = head;
//     return head;
// }
Node *push(Node *head, int new_data)
{
    Node *new_node = new Node(new_data);
    new_node->next = head;
    head = new_node;
    return head;
}
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    head = push(head, 8);
    head = push(head, 20);
    head = push(head, 20);
    head = push(head, 19);
    head = push(head, 19);
    head = push(head, 15);
    head = push(head, 8);

    printList(head);
    cout << "After removing Duplicates in Linked list " << endl;
    RemoveDuplicate(head);
    printList(head);

    return 0;
}