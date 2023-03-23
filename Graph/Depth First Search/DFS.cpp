#include <iostream>
#include <vector>
using namespace std;

void addEdeg(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFSRec(vector<int> adj[], int s, bool visited)
{
}

void DFS(vector<int> adj[], int s, int v)
{
    bool visited[v];
    for (int i = 0; i < n; i++)
        visited[i] = false;

    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            DFSRec(adj, i, visited);
        }
    }
}

int main()
{
    return 0;
}