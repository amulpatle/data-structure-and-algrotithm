#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int v, int u)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[], int s, bool visited[])
{
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int ver : adj[u])
        {
            if (visited[ver] == false)
            {
                visited[ver] = true;
                q.push(ver);
            }
        }
    }
}

int countIsland(vector<int> adj[], int v)
{
    int count = 0;
    bool visited[v];
    for (int i = 0; i < v; i++)
        visited[i] = false;

    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            count++;
            BFS(adj, i, visited);
        }
    }
    return count;
}

int main()
{
    int V = 7;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 4, 5);
    addEdge(adj, 5, 6);
    addEdge(adj, 4, 6);

    cout << "Number of islands: " << countIsland(adj, V);
    return 0;
}