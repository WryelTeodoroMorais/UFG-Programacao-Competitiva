#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll InF = 1e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<ll> a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<vector<pair<int,ll>>> graph(n + 1);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        ll b;

        cin >> u >> v >> b;

        graph[u].push_back({v, b});
        graph[v].push_back({u, b});
    }

    vector<ll> dist(n + 1, InF);

    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;

    dist[1] = a[1];

    pq.push({dist[1], 1});

    while (!pq.empty())
    {
        auto [custo, u] = pq.top();
        pq.pop();

        if (custo > dist[u])
            continue;

        for (auto [v, edge] : graph[u])
        {
            ll novo = custo + edge + a[v];

            if (novo < dist[v])
            {
                dist[v] = novo;
                pq.push({novo, v});
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        cout << dist[i];

        if (i < n)
            cout << " ";
    }

    cout << "\n";

    return 0;
}