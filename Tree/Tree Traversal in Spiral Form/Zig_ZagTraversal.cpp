// #include <iostream>
// #include <vector>
// #include <queue>
// using namespace std;
// struct Node
// {
//     /* data */
//     int data;
//     Node *left, *right;
//     Node(int x)
//     {
//         data = x;
//         left = right = NULL;
//     }
// };
// vector<vector<int>> zigzagOrder(Node *root)
// {
//     vector<vector<int>> result;
//     if (root == NULL)
//         return result;
//     queue<Node *> NodeQueue;
//     NodeQueue.push(root);
//     bool leftToright = true;
//     while (!NodeQueue.empty())
//     {
//         int size = NodeQueue.size();
//         vector<int> row(size);
//         for (int i = 0; i < size; i++)
//         {
//             Node *node = NodeQueue.front();
//             NodeQueue.pop();
//             int index = leftToright ? i : size - 1 - i;
//             row[index] = node->data;
//             if (root->left)
//             {
//                 NodeQueue.push(root->left);
//             }
//             if (root->right)
//             {
//                 NodeQueue.push(root->right);
//             }
//         }
//         leftToright = !leftToright;
//         result.push_back(row);
//     }
//     return result;
// }
// int main()
// {
//     Node *root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     vector<vector<int>> ans;
//     ans = zigzagOrder(root);
//     cout << "Zig Zag Traversal of Binary Tree" << endl;

//     for (int i = 0; i < ans.size(); i++)
//     {
//         for (int j = 0; j < ans[i].size(); j++)
//         {
//             cout << ans[i][j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int val;
    Node *left, *right;
};

vector<vector<int>> zigzagLevelOrder(Node *root)
{
    vector<vector<int>> result;
    if (root == NULL)
    {
        return result;
    }

    queue<Node *> nodesQueue;
    nodesQueue.push(root);
    bool leftToRight = true;

    while (!nodesQueue.empty())
    {
        int size = nodesQueue.size();
        vector<int> row(size);
        for (int i = 0; i < size; i++)
        {
            Node *node = nodesQueue.front();
            nodesQueue.pop();

            // find position to fill node's value
            int index = (leftToRight) ? i : (size - 1 - i);

            row[index] = node->val;
            if (node->left)
            {
                nodesQueue.push(node->left);
            }
            if (node->right)
            {
                nodesQueue.push(node->right);
            }
        }
        // after this level
        leftToRight = !leftToRight;
        result.push_back(row);
    }
    return result;
}
Node *newNode(int data)
{
    Node *node = new Node;
    node->val = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
int main()
{
    int i, j;
    Node *root = newNode(3);
    root->left = newNode(9);
    root->right = newNode(20);
    root->right->left = newNode(15);
    root->right->right = newNode(7);
    vector<vector<int>> ans;
    ans = zigzagLevelOrder(root);
    cout << "Zig Zag Traversal of Binary Tree" << endl;
    for (i = 0; i < ans.size(); i++)
    {
        for (j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}