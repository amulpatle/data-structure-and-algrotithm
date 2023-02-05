#include <iostream>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->right;
    }
    cout << endl;
}
Node *BTToDll(Node *root)
{
    if (root == NULL)
        return root;
    static Node *prev = NULL;
    Node *head = BTToDll(root->left);
    if (prev == NULL)
    {
        head = root;
    }
    else
    {
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    BTToDll(root->right);
    return head;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(20);
    root->right->left = new Node(30);
    root->right->right = new Node(35);

    Node *head = BTToDll(root);
    printlist(head);
    return 0;
}