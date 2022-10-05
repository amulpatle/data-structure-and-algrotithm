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

void NthNode(Node *head, int k)
{
    int count = 0;
    Node *temp;
    for (temp = head; temp != NULL; temp = temp->next)
        count++;

    if (count < k)
        return;

    temp = head;

    for (int i = 1; i < (count - k) + 1; i++)
        temp = temp->next;

    cout << temp->data;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);
    printlist(head);
    cout << "Nth node from end of Linked List: ";
    NthNode(head, 2);
    cout << endl;
    return 0;
}