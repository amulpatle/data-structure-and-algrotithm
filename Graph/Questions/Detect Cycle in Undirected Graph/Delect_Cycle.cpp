#include <bits/stdc++.h>
using namespace std;

bool BFS(int src, vector<int> adj[], int V, bool visited[], int parent[])
{
    queue<int> q;
    visited[src] = true;
    q.push(src);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        for (auto v : adj[u])
        {
            if (visited[v] && parent[u] != v)
                return true;
            if (visited[v] == false)
            {
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }
    return false;
}

bool isCycle(vector<int> adj[], int V)
{
    int parent[V];
    for (int i = 0; i < V; i++)
        parent[i] = -1;

    bool visited[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    for (int i = 0; i < V; i++)
    {
        if (!visited[i] && BFS(i, adj, V, visited, parent))
            return true;
        return false;
    }
}
void addEdge(vector<int> adj[], int v, int u)
{
    adj[v].push_back(u);
    adj[u].push_back(v);
}
int main()
{
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 4, 5);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);

    if (isCycle(adj, V))
        cout << "Cycle found" << endl;
    else
        cout << "No cycle found" << endl;

    return 0;
}