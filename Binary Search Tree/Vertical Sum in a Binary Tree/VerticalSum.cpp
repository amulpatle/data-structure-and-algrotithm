#include <bits/stdc++.h>
using namespace std;
struct Node
{
    /* data */
    int data;
    Node *left, *right;
    Node(int x)
    {
        left = right = NULL;
        data = x;
    }
};
void vSumr(Node *root, int hd, map<int, int> &sum)
{
    if (root == NULL)
    {
        return;
    }
    vSumr(root->left, hd - 1, sum);
    sum[hd] += root->data;
    vSumr(root->right, hd + 1, sum);
}
void vSum(Node *root)
{
    if (root == NULL)
        return;
    map<int, int> sum;
    vSumr(root, 0, sum);
    for (auto i : sum)
    {
        cout << i.second << " ";
    }
}
int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(50);
    root->left->left = new Node(30);
    root->left->right = new Node(40);

    vSum(root);
    return 0;
}