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
Node *Segregate(Node *head)
{
    Node *even_s = NULL;
    Node *even_e = NULL;
    Node *odd_s = NULL;
    Node *odd_e = NULL;

    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data % 2 == 0)
        {
            if (even_s == NULL)
            {
                even_s = curr;
                even_e = curr;
                curr = curr->next;
            }
            else
            {
                even_e->next = curr;
                even_e = even_e->next;
                curr = curr->next;
            }
        }

        else
        {
            if (odd_s == NULL)
            {
                odd_s = curr;
                odd_e = curr;
                curr = curr->next;
            }
            else
            {
                odd_e->next = curr;
                odd_e = odd_e->next;
                curr = curr->next;
            }
        }
    }
    // if (curr == NULL)

    even_e->next = odd_s;
    odd_e->next = NULL;
    return even_s;
}

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