#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int k)
    {
        data = k;
        left = right = NULL;
    }
};
void TraverseLeft(Node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->left == NULL && root->right == NULL))
    {
        return;
    }
    ans.push_back(root->data);
    if (root->left)
    {
        TraverseLeft(root->left, ans);
    }
    else
    {
        TraverseLeft(root->right, ans);
    }
}
void Traverseleaf(Node *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(root->data);
        return;
    }
    Traverseleaf(root->left, ans);
    Traverseleaf(root->right, ans);
}

void Traverseright(Node *root, vector<int> &ans)
{
    if ((root == NULL) || (root->right == NULL && root->left == NULL))
    {
        return;
    }
    if (root->right)
    {
        Traverseright(root->right, ans);
    }
    else
    {
        Traverseright(root->left, ans);
    }
    ans.push_back(root->data);
}

vector<int> boundary(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;
    ans.push_back(root->data);

    // left traverse
    TraverseLeft(root->left, ans);
    // leaf traverse
    // left subtree
    Traverseleaf(root->left, ans);
    // right subtree
    Traverseleaf(root->right, ans);
    // right traverse
    Traverseright(root->right, ans);

    return ans;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(60);
    root->right->left->left = new Node(50);
    root->right->right->right = new Node(70);

    vector<int> ans = boundary(root);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}