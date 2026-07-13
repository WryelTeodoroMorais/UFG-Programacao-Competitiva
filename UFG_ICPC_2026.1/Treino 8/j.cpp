#include <bits/stdc++.h>
using namespace std;

#define MAX 30010

vector<int> graph[MAX];
bool vis[MAX];

int bfs(int init)
{
    int qtd = 0;
    queue<int> q;
    q.push(init);
    vis[init] = true;

    while(!q.empty())
    {
        int u = q.front();
        qtd++;
        q.pop();

        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];
            if(!vis[v])
            {
                vis[v] = true;
                q.push(v);
            }
        }
    }
    return qtd;
}

int main()
{ 
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;
        for(int i=0; i<m; i++)
        {
            int a,b;
            cin >> a >> b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        int ans = 0;

        for(int i=1; i<=n; i++) if(!vis[i])
            ans = max(ans,bfs(i));
        
        cout << ans << '\n';

        for(int i=1; i<=n; i++)
        {
            graph[i].clear();
            vis[i] = false;
        }
    }
    
    return 0;
}