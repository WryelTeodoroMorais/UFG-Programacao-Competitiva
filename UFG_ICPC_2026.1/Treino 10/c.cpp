#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll InF = 1e18;
const int Max = 200010;

vector<pair<int,ll>> graph[Max];

ll dist[Max];
int vis[Max];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i = 1; i < n; i++)
    {
        ll a, b;
        int x;

        cin >> a >> b >> x;

        graph[i].push_back({i + 1, a});
        graph[i].push_back({x, b});
    }

    for(int i = 1; i <= n; i++)
        dist[i] = InF;

    priority_queue<pair<ll,int>> pq;

    dist[1] = 0;

    pq.push({-dist[1], 1});

    while(!pq.empty())
    {
        pair<ll,int> topo = pq.top();
        pq.pop();

        ll custo = -topo.first;
        int u = topo.second;

        if(vis[u])
            continue;

        vis[u] = true;

        for(int i = 0; i < graph[u].size(); i++)
        {
            int v = graph[u][i].first;
            ll tempo = graph[u][i].second;

            if(dist[v] > custo + tempo)
            {
                dist[v] = custo + tempo;
                pq.push({-dist[v], v});
            }
        }
    }

    cout << dist[n] << '\n';

    return 0;
}