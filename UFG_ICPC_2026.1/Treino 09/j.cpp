#include <bits/stdc++.h>
using namespace std;

#define MAX 200010

vector<int> graph[MAX];
int vis[MAX],res[MAX];

void dfs(int u)
{
    int sum = 0;
    vis[u] = 1;
    for(int i=0; i<graph[u].size(); i++)
    {
        int filho = graph[u][i];
        if(!vis[filho])
        {
            dfs(filho);
            sum += res[filho];
            sum++;
        }
    }
    res[u] = sum;
}

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=2; i<=n; i++)
    {
        int cf;
        cin >> cf;
        graph[cf].push_back(i);
    }

    dfs(1);

    for(int i=1; i<=n; i++) 
        cout << res[i] << ' ';

    cout << '\n';

    return 0;
}