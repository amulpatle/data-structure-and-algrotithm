#include <iostream>
#include <vector>
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

void treeTolist(Node *root, vector<int> &list)
{
    if (root == NULL)
        return;

    treeTolist(root->left, list);
    list.push_back(root->key);
    treeTolist(root->right, list);
}

bool isPair(Node *root, int target)
{
    if (root == NULL)
        return false;
    vector<int> v;
    treeTolist(root, v);
    int start = 0;
    int end = v.size() - 1;
    while (start < end)
    {
        if (v[start] + v[end] == target)
        {
            cout << "sum pair is : " << v[start] << " " << v[end];
            return true;
        }

        if (v[start] + v[end] > target)
            end--;
        if (v[start] + v[end] < target)
            start++;
    }
    cout << "pair is not availabe" << endl;
    return false;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(8);
    root->right = new Node(20);
    root->left->left = new Node(4);
    root->left->right = new Node(9);
    root->right->left = new Node(11);
    root->right->right = new Node(30);
    root->right->right->left = new Node(25);

    int sum = 33;

    isPair(root, sum);
    return 0;
}