#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

typedef long long int ll;
const ll inf = 1000000000000000ll; 

vector<pair<int,int>> graph[MAX];
ll dist[MAX];
bool vis[MAX];

int main()
{
    ios::sync_with_stdio(NULL); 
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b,c));
    }

    priority_queue<pair<ll,int>> pq; 

    for(int i=1; i<=n; i++) 
        dist[i] = inf;

    dist[1] = 0; 
    pq.push(make_pair(-dist[1],1));

    while(!pq.empty())
    {
        pair<ll,int> topo = pq.top(); 
        pq.pop();
        ll custo = -topo.first;
        int vtx = topo.second;
        if(vis[vtx]) 
            continue;
        vis[vtx] = true;
        for(int i=0; i<graph[vtx].size(); i++)
        {
            int v = graph[vtx][i].first;
            int custo_aresta = graph[vtx][i].second;
            if(dist[v] > custo + custo_aresta)
            {
                dist[v] = custo + custo_aresta;
                pq.push(make_pair(-dist[v],v));
            }
        }
    }
    
    for(int i=1; i<=n; i++) 
        cout << dist[i] << ' ';
    cout << '\n';
    
    return 0;
}