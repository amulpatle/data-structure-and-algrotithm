#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFSRec(vector<int> adj[], int s, bool visited[])
{
    cout << s << " ";
    visited[s] = true;
    for (auto it : adj[s])
    {
        if (visited[it] == false)
        {
            DFSRec(adj, it, visited);
        }
    }
}

void DFS(vector<int> adj[], int s, int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;

    for (int i = 1; i < v; i++)
    {
        if (visited[i] == false)
        {
            DFSRec(adj, i, visited);
        }
    }
}

int main()
{
    int V = 6;
    vector<int> adj[V];

    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 1, 5);
    addEdge(adj, 2, 4);
    addEdge(adj, 2, 1);
    addEdge(adj, 3, 1);
    addEdge(adj, 4, 1);
    addEdge(adj, 4, 2);
    addEdge(adj, 5, 1);

    vector<int> df;
    DFS(adj, 5, V);
    // for (auto it : df)
    //     cout << it << " ";
    return 0;
}