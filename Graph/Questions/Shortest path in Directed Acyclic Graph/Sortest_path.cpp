#include <bits/stdc++.h>
using namespace std;

void topoSort(int node, vector<pair<int, int>> adj[], int visited[], stack<int> &st)
{
    visited[node] = 1;

    for (auto it : adj[node])
    {
        int V = it.first;
        if (!visited[V])
        {
            topoSort(V, adj, visited, st);
        }
    }

    st.push(node);
}
vector<int> shortestPath(int N, int M, vector<vector<int>> &edges)
{
    vector<pair<int, int>> adj[M];
    for (int i = 0; i < M; i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];
        adj[u].push_back({v, wt});
    }
    int visited[N] = {0};
    stack<int> st;
    for (int i = 0; i < N; i++)
    {
        if (!visited[i])
        {
            topoSort(i, adj, visited, st);
        }
    }

    vector<int> dis(N);
    for (int i = 0; i < N; i++)
        dis[i] = INT_MAX;
    dis[0] = 0;
    while (!st.empty())
    {
        int node = st.top();
        st.pop();

        for (auto it : adj[node])
        {
            int V = it.first;
            int wt = it.second;

            if (dis[node] + wt < dis[V])
            {
                dis[V] = dis[node] + wt;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (dis[i] == 1e9)
            dis[i] = -1;
    }
    return dis;
}
int main()
{
    int N = 6, M = 7;

    vector<vector<int>> edges = {{0, 1, 2}, {0, 4, 1}, {4, 5, 4}, {4, 2, 2}, {1, 2, 3}, {2, 3, 6}, {5, 3, 1}};

    vector<int> ans = shortestPath(N, M, edges);

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i] << " ";
    }

    return 0;
}