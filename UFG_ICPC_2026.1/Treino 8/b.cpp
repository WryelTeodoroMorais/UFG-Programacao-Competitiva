#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

vector<int> graph[MAX];
int vis[MAX];

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

    for(int i=1; i<=n; i++) 
        vis[i] = 0;
    
    vector<int> dif;
    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            q.push(i);
            vis[i] = 1;
            dif.push_back(i);
        }
        else
            continue;

        while(!q.empty())
        {
            int u = q.front();
            q.pop();

            for(int i=0; i<graph[u].size(); i++)
            {
                int v = graph[u][i];
                if(!vis[v])
                {
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
    }

    cout << dif.size() - 1 << '\n';

    for(int i=0; i<dif.size() -1; i++)
        cout << dif[i] << ' ' << dif[i+1] << '\n';

    return 0;
}   