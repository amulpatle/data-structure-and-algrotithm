#include <iostream>
#include <queue>
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
int WidthOfBinaryTree(Node *root)
{
    queue<Node *> q;
    int res = 0;
    q.push(root);

    while (q.empty() == false)
    {
        int count = q.size();
        res = max(res, count);

        for (int i = 0; i < count; i++)
        {
            Node *curr = q.front();
            q.pop();
            if (curr->left != NULL)
                q.push(curr->left);
            if (curr->right != NULL)
                q.push(curr->right);
        }
    }
    return res;
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    cout << WidthOfBinaryTree(root);
    return 0;
}