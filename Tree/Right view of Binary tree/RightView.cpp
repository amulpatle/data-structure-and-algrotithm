#include <iostream>
#include <vector>
using namespace std;
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
class solution
{
public:
    vector<int> RightView(Node *root)
    {
        vector<int> res;
        recursion(root, 0, res);
        return res;
    }

    void recursion(Node *root, int level, vector<int> &res)
    {
        if (root == NULL)
            return;
        if (res.size() == level)
            res.push_back(root->data);
        recursion(root->left, level + 1, res);
        recursion(root->right, level + 1, res);
    }
};

int main()
{
    solution s;
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);
    vector<int> ans = s.RightView(root);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}