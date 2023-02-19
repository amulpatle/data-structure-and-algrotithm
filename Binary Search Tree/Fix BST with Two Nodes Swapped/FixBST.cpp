#include <iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node *left, *right;
    Node(int x)
    {
        left = NULL;
        right = NULL;
        data = x;
    }
};
void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
Node *first = NULL;
Node *second = NULL;
Node *prevv = NULL;

void FixBst(Node *root)
{
    if (root == NULL)
        return;

    FixBst(root->left);
    if (prevv != NULL && root->data < prevv->data)
    {
        if (first == NULL)
            first = prevv;
        second = root;
    }
    prevv = root;
    FixBst(root->right);
}

int main()
{
    Node *root = new Node(18);
    root->left = new Node(60);
    root->right = new Node(70);
    root->left->left = new Node(4);
    root->right->left = new Node(8);
    root->right->right = new Node(80);

    inorder(root);
    cout << endl;
    FixBst(root);
    int temp = first->data;
    first->data = second->data;

    second->data = temp;
    inorder(root);
    return 0;
}