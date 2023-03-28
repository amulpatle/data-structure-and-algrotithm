#include <bits/stdc++.h>
using namespace std;
vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> dist(V);
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;

    dist[S] = 0;
    pq.push({0, S});
    while (pq.empty() == false)
    {
        int wt = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto it : adj[node])
        {
            int edgWt = it[1];
            int edgNode = it[0];

            if (edgWt + wt < dist[edgNode])
            {
                dist[edgNode] = edgWt + wt;
                pq.push({dist[edgNode], edgNode});
            }
        }
    }
    return dist;
}
int main()
{
    int V = 3, E = 3, S = 2;
    vector<vector<int>> adj[V];
    vector<vector<int>> edges;
    vector<int> v1{1, 1}, v2{2, 6}, v3{2, 3}, v4{0, 1}, v5{1, 3}, v6{0, 6};
    int i = 0;
    adj[0].push_back(v1);
    adj[0].push_back(v2);
    adj[1].push_back(v3);
    adj[1].push_back(v4);
    adj[2].push_back(v5);
    adj[2].push_back(v6);

    vector<int> res = dijkstra(V, adj, S);

    for (int i = 0; i < V; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}