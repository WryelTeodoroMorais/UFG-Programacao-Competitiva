#include <bits/stdc++.h>
using namespace std;

#define MAX 55

vector<int> graph[MAX];
int vis[MAX];

void dfs(int u, int a, int b)
{
    vis[u] = 1;

    for (int i = 0; i < graph[u].size(); i++)
    {
        int v = graph[u][i];
    
        if (v == a && u == b || v == b && u == a)
            continue;

        if (!vis[v])
        {
            dfs(v, a, b);
        }
        
    }
}

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, m, a, b, cont = 0, temp;
    cin >> n >> m;
    vector <pair <int, int>> aux;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        aux.push_back({a, b});
    }

    for (int i = 0; i < m; i++)
    {
        a = aux[i].first;
        b = aux[i].second;

        for (int i = 0; i < MAX; i++)
            vis[i] = 0;

        dfs(1, a, b);

        temp = 0;
        for (int j = 1; j <= n; j++) 
            if (vis[j]) 
                temp++;

        if (temp < n) 
            cont++;
    }

    cout << cont << '\n';

    return 0;
}