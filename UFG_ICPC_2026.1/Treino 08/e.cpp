#include <bits/stdc++.h>
using namespace std;

#define MAX 200010

vector<int> graph[MAX];
int vis[MAX], dist[MAX];

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int ver, ar;
    cin >> ver >> ar;

    for(int i=0; i<ar; i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
    }

    for(int i=1; i<=ver; i++) 
    {
        vis[i] = 0;
        dist[i] = 0;
    }

    queue<int> q;
    q.push(1);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];

            if (v == 1)
            {
                cout << dist[u] + 1 << '\n';
                return 0;
            }

            if(!vis[v])
            {
                vis[v] = 1;
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    cout << -1 << '\n';

    return 0;
}   