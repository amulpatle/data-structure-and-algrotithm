#include <iostream>
using namespace std;
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void insert(Node *root, int x)
{
    Node *temp = new Node(x);
    if (root == NULL)
    {
        return temp;
    }
    if (root->key < x)
        insert(root->right, x);
    else
    {
        insert(root->left, x);
    }
}

int main()
{

    return 0;
}