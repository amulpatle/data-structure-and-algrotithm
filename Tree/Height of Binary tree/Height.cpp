#include <iostream>
using namespace std;
struct Node
{
    /* data */
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
int HeightOfTree(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return (1 + (HeightOfTree(root->left), HeightOfTree(root->right)));
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    cout << HeightOfTree(root);
    return 0;
}