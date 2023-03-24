#include <bits/stdc++.h>
using namespace std;
void BFS(vector<int> adj[], int v, int s, int dis[])
{
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;

    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        for (int V : adj[u])
        {
            if (visited[V] == false)
            {
                dis[v] = dis[u] + 1;
                visited[V] = true;
                q.push(V);
            }
        }
    }
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int V = 4;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    int dis[V];
    for (int i = 0; i < V; i++)
        dis[i] = INT_MAX;

    dis[0] = 0;
    BFS(adj, V, 0, dis);

    for (int i = 0; i < V; i++)
        cout << dis[i] << " ";
    return 0;
}