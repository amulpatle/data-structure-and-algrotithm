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

// Inset Node at End of the linked list
Node *InsertAtEnd(Node *head, int x)
{
    // Here we create new Node which we wanted to inset
    Node *temp1 = new Node(x);

    // This is the corner case
    // If linked list is empty then we simply return newly created node
    if (head == NULL)
    {
        return temp1;
    }
    Node *temp;
    temp = head;

    // traversing
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = temp1;

    return head;
}
int main()
{
    Node *head = new Node(45);
    head = InsertAtEnd(head, 23);

    Node *temp;
    temp = head;

        while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}