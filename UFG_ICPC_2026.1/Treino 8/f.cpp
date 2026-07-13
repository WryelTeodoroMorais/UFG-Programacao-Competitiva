#include <bits/stdc++.h>
using namespace std;

#define MAX 100010

vector<int> graph[MAX];
int times[MAX];

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    for(int i=1; i<=m; i++)
    {
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
        times[i] = 0;

    queue<int> q;

    for (int i = 1; i <= n; i++)
    {
        if (times[i] == 0)
        {
            times[i] = 1;
            q.push(i);
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

                if (times[v] == times[u])
                {
                    cout << "IMPOSSIBLE\n";
                    return 0;
                }
                if (times[v] == 0)
                {
                    if(times[u] == 1)
                    {
                        times[v] = 2;
                        q.push(v);
                    }
                    else if(times[u] == 2)
                    {
                        times[v] = 1;
                        q.push(v);
                    }
                }
            }
        }
    }

    for (int i = 1; i <= n; i++)
        cout << times[i] << ' ';
    
    cout << "\n";

    return 0;
}   