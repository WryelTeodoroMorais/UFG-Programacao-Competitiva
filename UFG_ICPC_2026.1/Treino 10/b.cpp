#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll INF = 1e18;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<vector<pair<int, ll>>> adj(n + 1);
    vector<pair<int, pair<int, ll>>> edges;
    
    for (int i = 0; i < m; i++)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        edges.push_back({a, {b, c}});
    }
    
    for (int start = 1; start <= n; start++)
    {
        vector<ll> dist(n + 1, INF);
        priority_queue<pair<ll, int>, vector<pair<ll, int>>, greater<pair<ll, int>>> pq;
        
        dist[start] = 0;
        pq.push({0, start});
        
        while (!pq.empty())
        {
            auto [d, u] = pq.top();
            pq.pop();
            
            if (d > dist[u]) continue;
            
            for (auto [v, w] : adj[u])
                if (dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
        }
        
        ll ans = INF;
        for (auto [u, vw] : edges)
        {
            int v = vw.first;
            ll w = vw.second;
            if (v == start && dist[u] != INF)
                ans = min(ans, dist[u] + w);
        }
        
        if (ans != INF)
            cout << ans << '\n';
        else
            cout << -1 << '\n';
    }
    
    return 0;
}
