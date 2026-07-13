#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

typedef long long int ll;
const ll inf = 1000000000000000ll;

vector<pair<int,int>> graph[MAX]; 
ll dist[MAX][2];
bool vis[MAX][2];

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

    for(int i=1; i<=n; i++) 
        for(int j=0; j<2; j++) 
            dist[i][j] = inf;

    priority_queue<tuple<ll,int,int> > pq; 
    dist[1][0] = 0;
    pq.push(make_tuple(-dist[1][0],1,0));
    while(!pq.empty())
    {
        auto [custo,vtx,flag] = pq.top(); 
        pq.pop();
        custo *= -1;
        if(vis[vtx][flag]) 
            continue;
        vis[vtx][flag] = true;
        for(int i=0; i<graph[vtx].size(); i++)
        {
            int v = graph[vtx][i].first;
            int custo_aresta = graph[vtx][i].second;
          
            if(dist[v][flag] > custo + custo_aresta)
            {
                dist[v][flag] = custo + custo_aresta;
                pq.push(make_tuple(-dist[v][flag],v,flag));
            }
      
            if(flag == 0 && dist[v][1] > custo + (custo_aresta/2))
            {
                dist[v][1] = custo + (custo_aresta/2);
                pq.push(make_tuple(-dist[v][1],v,1));
            }
        }
    }
    
    cout << min(dist[n][0],dist[n][1]) << '\n';
    return 0;
}