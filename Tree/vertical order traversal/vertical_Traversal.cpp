#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
};

struct Node *newNode(int data)
{
    struct Node *node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
vector<int> verticalOrder(Node *root)
{
    map<int, map<int, vector<int>>> nodes;
    queue<pair<Node *, pair<int, int>>> q;
    vector<int> ans;

    if (root == NULL)
    {
        return ans;
    }
    q.push(make_pair(root, make_pair(0, 0)));
    while (!q.empty())
    {
        pair<Node *, pair<int, int>> temp = q.front();
        q.pop();

        Node *frontNode = temp.first;
        int hd = temp.second.first;
        int lvl = temp.second.second;

        nodes[hd][lvl].push_back(frontNode->data);

        if (frontNode->left)
            q.push(make_pair(frontNode->right, make_pair(hd - 1, lvl + 1)));

        if (frontNode->right)
            q.push(make_pair(frontNode->right, make_pair(hd + 1, lvl + 1)));

        for (auto i : nodes)
        {
            for (auto j : i.second)
            {
                for (auto k : j.second)
                {
                    ans.push_back(k);
                }
            }
        }
    }
    return ans;
}
int main()
{

    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
    cout << "Vertical order traversal is \n";
    vector<int> result = verticalOrder(root);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}