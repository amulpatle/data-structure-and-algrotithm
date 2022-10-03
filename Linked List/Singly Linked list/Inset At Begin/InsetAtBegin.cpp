#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

// Inset Node At Begining
Node *insertAtBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main()
{
    Node *head = NULL;
    head = insertAtBegin(head, 56);
    head = insertAtBegin(head, 93);
    head = insertAtBegin(head, 39);

    Node *temp = head;
    while (temp != NULL) // traverse Linked List
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}