#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

vector<int> graph[MAX];
int vis[MAX];
int cont = 1;

void dfs(int u)
{
    vis[u] = 1;
    for(int i=0; i<graph[u].size(); i++)
    {
        int v = graph[u][i];
        if(!vis[v])
        {
            cont++;
            dfs(v);
        }
    }
}

int main()
{
    ios::sync_with_stdio(NULL); 
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        graph[i+1].push_back(a);
    }

    dfs(x);

    cout << cont << '\n';
    
    return 0;
}