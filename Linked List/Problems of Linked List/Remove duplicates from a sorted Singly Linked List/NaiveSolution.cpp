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
void DeleteNode(Node *temp)
{
    Node *curr;
    curr = temp->next;

    temp->data = curr->data;
    temp->next = curr->next;

    delete curr;
}

Node *removeDuplicate(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    for (Node *temp = head; temp != NULL && temp->next != NULL; temp = temp->next)
    {
        for (Node *curr = head; curr != NULL && curr->next != NULL; curr = curr->next)
        {
            if (temp->data == curr->data)
            {
                delete (curr);
            }
        }
    }
    return head;
}

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
    Node *llist = NULL;
    llist = push(llist, 20);
    llist = push(llist, 13);
    llist = push(llist, 13);
    llist = push(llist, 11);
    llist = push(llist, 11);
    llist = push(llist, 11);
    cout << ("List before removal of duplicates\n");
    printList(llist);
    cout << ("List after removal of elements\n");

    llist = removeDuplicate(llist);
    printList(llist);

    return 0;
}