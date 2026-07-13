#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

vector<int> graph[MAX];
int dist[MAX],ant[MAX];

int main()
{ 
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=1; i<=n; i++) 
        dist[i] = -1;

    queue<int> q;
    q.push(1); dist[1] = 0;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];
            if(dist[v] == -1)
            {
                dist[v] = dist[u] + 1;
                ant[v] = u;
                q.push(v);
            }
        }
    }

    if(dist[n] != -1)
    {
        cout << dist[n]+1 << '\n';
        int dst = n;
        vector<int> caminho;

        while(dst != 1)
        {
            caminho.push_back(dst);
            dst = ant[dst];
        }

        caminho.push_back(1);

        for(int i=int(caminho.size())-1; i>=0; i--)
            cout << caminho[i] << ' ';
        
        cout << '\n';
    }
    else 
        cout << "IMPOSSIBLE" << '\n';

    return 0;
}