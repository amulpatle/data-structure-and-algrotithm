#include <bits/stdc++.h>
using namespace std;

vector<int> topoSort(vector<int> adj[], int V)
{
    int indgree[V] = {0};

    for (int i = 0; i < V; i++)
    {
        for (auto it : adj[i])
        {
            indgree[it]++;
        }
    }

    queue<int> q;
    for (int i = 0; i < V; i++)
    {
        if (indgree[i] == 0)
            q.push(i);
    }
    vector<int> topoSort;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        topoSort.push_back(u);
        for (auto it : adj[u])
        {
            indgree[it]--;
            if (indgree[it] == 0)
                q.push(it);
        }
    }
    return topoSort;
}

int main()
{
    // V = 6;
    vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
    int V = 6;

    vector<int> ans = topoSort(adj, V);

    for (auto node : ans)
    {
        cout << node << " ";
    }
    cout << endl;
    return 0;
}