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
        right = left = NULL;
    }
};

int sizeOfBinaryTree(Node *root)
{
    if (root == NULL)
        return 0;

    return 1 + sizeOfBinaryTree(root->left) + sizeOfBinaryTree(root->right);
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);

    cout << sizeOfBinaryTree(root);
    return 0;
}
