#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;

    while (cin >> m >> n && (m || n)) 
    {
        vector<vector<pair<int,int>>> graph(m);
        ll total = 0;

        for (int i = 0; i < n; i++) 
        {
            int x, y, z;
            cin >> x >> y >> z;

            graph[x].push_back({y, z});
            graph[y].push_back({x, z});

            total += z;
        }

        vector<bool> vis(m, false);

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        pq.push({0, 0});

        ll economia = 0;
        int cont = 0;

        while (!pq.empty()) 
        {
            auto [w, u] = pq.top();
            pq.pop();

            if (vis[u]) 
                continue;

            vis[u] = true;
            economia += w;
            cont++;

            for (auto [v, cost] : graph[u]) 
                if (!vis[v]) 
                    pq.push({cost, v});
        }

        if (cont == m)
            cout << (total - economia) << "\n";
        else
            cout << "Impossible\n";
    }

    return 0;
}