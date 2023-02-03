#include <bits/stdc++.h>
using namespace std;
#define Max
struct Node
{
    /* data */
    int data;
    struct Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int getMax(Node *root)
{
    if (root == NULL)
        return INT_MIN;

    return max(root->data, max(getMax(root->left), getMax(root->right)));
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

    cout << getMax(root);
    return 0;
}