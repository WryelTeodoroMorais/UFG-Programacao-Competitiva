#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s, c;

    while (cin >> s >> c && (s || c)) 
    {
        map<string, int> id;
        vector<string> stations(s);

        for (int i = 0; i < s; i++) 
        {
            cin >> stations[i];
            id[stations[i]] = i;
        }

        vector<vector<pair<int,int>>> graph(s);

        for (int i = 0; i < c; i++) 
        {
            string a, b;
            int cost;
            cin >> a >> b >> cost;

            int u = id[a];
            int v = id[b];

            graph[u].push_back({v, cost});
            graph[v].push_back({u, cost});
        }

        string inicio;
        cin >> inicio;
        int start = id[inicio];

        vector<bool> vis(s, false);

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        pq.push({0, start});

        ll cost = 0;
        int cont = 0;

        while (!pq.empty()) 
        {
            auto [w, u] = pq.top();
            pq.pop();

            if (vis[u]) 
                continue;

            vis[u] = true;
            cost += w;
            cont++;

            for (auto [v, cst] : graph[u])
                if (!vis[v]) 
                    pq.push({cst, v});
        }

        if (cont == s)
            cout << cost << "\n";
        else
            cout << "Impossible\n";
    }

    return 0;
}