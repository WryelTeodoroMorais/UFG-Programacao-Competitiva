#include <bits/stdc++.h>
using namespace std;

map <int, vector <int>> graph;
map <int, int> vis;
int maior = 1;

void dfs(int u)
{
    vis[u] = 1;
    for(int i=0; i<graph[u].size(); i++)
    {
        int v = graph[u][i];
        maior = max(maior, v);
        if(!vis[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    ios::sync_with_stdio(NULL); 
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1);

    cout << maior << '\n';
    
    return 0;
}