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
bool isSum(Node *root)
{
    if (root == NULL)
        return true;

    if (root->left == NULL && root->right == NULL)
        return true;

    int sum = 0;
    if (root->left != NULL)
        sum += root->left->data;
    if (root->right != NULL)
        sum += root->right->data;

    return (sum == root->data && isSum(root->left) && isSum(root->right));
}
int main()
{
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->right->left = new Node(3);
    root->right->right = new Node(9);
    cout << isSum(root) << endl;

    return 0;
}