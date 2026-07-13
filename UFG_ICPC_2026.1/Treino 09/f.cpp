#include <bits/stdc++.h>
using namespace std;

#define MAX 14

vector<pair<int, int>> graph[MAX];
int visitado[MAX];
int dist = 0;

void dfs(int atual, int dist_acumulada) 
{
    dist = max(dist, dist_acumulada);

    for (auto &estrada : graph[atual]) 
    {
        int vizinho = estrada.first;
        int peso = estrada.second;

        if (!visitado[vizinho]) 
        {
            visitado[vizinho] = 1; 
            dfs(vizinho, dist_acumulada + peso); 
            visitado[vizinho] = 0; 
        }
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) 
    {
        int a, b, c;
        cin >> a >> b >> c;
      
        graph[a].push_back({b, c});
        graph[b].push_back({a, c});
    }

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j < MAX; j++)
            visitado[j] = 0;

        visitado[i] = 1;
        dfs(i, 0);     
    }

    cout << dist << "\n";

    return 0;
}