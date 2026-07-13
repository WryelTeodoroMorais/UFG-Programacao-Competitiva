#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

typedef long long int ll;

vector<pair<int,int>> graph[MAX];
bool vis[MAX];

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b,c));
        graph[b].push_back(make_pair(a,c));
    }

    priority_queue<pair<int,int>> pq;
    pq.push(make_pair(-0,1));
    ll sum = 0; int qtd = 0;

    while(!pq.empty())
    {
        int valor = -pq.top().first;
        int vtx = pq.top().second;
        pq.pop();

        if(vis[vtx])
            continue;
       
        vis[vtx] = true;
        sum += valor;
        qtd++;

        for(int i=0; i<graph[vtx].size(); i++)
        {
            int v = graph[vtx][i].first;
            int custo = graph[vtx][i].second;

            if(!vis[v])
                pq.push(make_pair(-custo,v));
        }
    }

    if(qtd == n) 
        cout << sum << '\n';
    else 
        cout << "IMPOSSIBLE" << '\n';
    
    return 0;
}