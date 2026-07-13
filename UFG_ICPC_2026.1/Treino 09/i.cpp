#include <bits/stdc++.h>
using namespace std;

#define MAX 200010

vector<int> graph[MAX];
int vis[MAX];
vector<int> caminho;

void dfs(int u)
{
    vis[u] = 1;
    caminho.push_back(u);
    for(int i=0; i<graph[u].size(); i++)
    {
        int v = graph[u][i];
        if(!vis[v])
        {
            dfs(v);
            caminho.push_back(u);
        }
    }
}

int main()
{
    ios::sync_with_stdio(NULL); 
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=0; i<n-1; i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=1; i<=n; i++)
        sort(graph[i].begin(),graph[i].end());

    dfs(1);

    for(int i=0; i<caminho.size(); i++)
        cout << caminho[i] << ' ';

    cout << '\n';
    
    return 0;
}