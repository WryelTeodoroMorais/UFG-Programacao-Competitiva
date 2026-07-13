#include <bits/stdc++.h>
using namespace std;

#define MAX 10

vector<int> graph[MAX];
int vis[MAX];
int cont = 0, maior = 0;

void dfs(int u, int n)
{
    vis[u] = 1;
    maior++;

    if (maior == n)
        cont++;
    else
        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];
            if(!vis[v])
            {
                dfs(v, n);
            }
        }

    maior--;
    vis[u] = 0;
}

int main()
{
    ios::sync_with_stdio(NULL); 
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    dfs(1, n);

    cout << cont << '\n';
    
    return 0;
}