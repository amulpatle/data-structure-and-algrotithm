#include <bits/stdc++.h>
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

Node *push(Node *head, int new_data)
{
    Node *new_node = new Node(new_data);
    new_node->next = head;
    head = new_node;
    return head;
}

void Remove_Duplicates(Node *head)
{

    unordered_set<int> us;
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        if (us.find(curr->data) != us.end())
        {
            prev->next = curr->next;
            delete curr;
        }
        else // 8 15 19 19 20 20 8
        {
            us.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
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
    Remove_Duplicates(head);
    printList(head);
    return 0;
}