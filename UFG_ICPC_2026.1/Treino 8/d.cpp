#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

vector<int> graph[MAX];
int vis[MAX];
int pai[MAX];
int inicio, fim;

bool dfs(int u, int p) 
{
    vis[u] = 1;
    pai[u] = p;

    for (int v : graph[u]) 
    {
        if (v == p) 
            continue;

        if (vis[v] == 1) 
        {
            inicio = v;
            fim = u;
            return true;
        }

        if (vis[v] == 0) 
            if (dfs(v, u)) 
                return true;
    }

    return false;
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) 
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) 
    {
        if (vis[i] == 0) 
        {
            if (dfs(i, 0)) 
            {
                vector<int> caminho;
                caminho.push_back(inicio);
                
                for (int atual = fim; atual != inicio; atual = pai[atual]) 
                    caminho.push_back(atual);
                
                caminho.push_back(inicio);

                cout << caminho.size() << '\n';

                for (int k = int(caminho.size()) - 1; k >= 0; k--)
                    cout << caminho[k] << ' ';
                
                cout << '\n';

                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}