#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void PreOrder(Node *root)
{
    if (root != NULL)

    {
        cout << root->data << " ";
        PreOrder(root->left);
        PreOrder(root->right);
    }
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    PreOrder(root);
    return 0;
}