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

int main()
{ // Creation of nodes
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    head->next = temp2;

    Node *temp;
    temp = head;

    // Traverse Linked list
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}