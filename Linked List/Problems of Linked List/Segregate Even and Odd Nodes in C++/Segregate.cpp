#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        Node *next = NULL;
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
Node *Segregate(Node *head)
{
    Node *temp; // We can not copy other Node data into Null Node ---> It will give us sementation fault
    Node *curr = head;
    Node *p = head;
    Node *q = head;
    while (curr != NULL)
    {

        if (curr->data % 2 != 0)
        {
            curr = curr->next;
        }
        else
        // (curr->data % 2 == 0)
        {

            int temp = curr->data;
            curr->data = p->data;
            p->data = temp;

            p = p->next;
            curr = curr->next;
        }
    }
    return q;
}

int main()
{
    Node *head = new Node(17);
    head->next = new Node(15);
    head->next->next = new Node(8);
    head->next->next->next = new Node(12);
    head->next->next->next->next = new Node(10);
    head->next->next->next->next->next = new Node(5);
    head->next->next->next->next->next->next = new Node(4);
    printlist(head);
    head = Segregate(head);
    cout << "After Segregation " << endl;
    printlist(head);
    return 0;
}
