#include <bits/stdc++.h>
using namespace std;

#define MAX 1005

char grid[MAX][MAX];
bool vis[MAX][MAX];
int h, w;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void dfs(int i, int j, bool *borda)
{
    vis[i][j] = true;
    
    if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
        *borda = true;
    
    for (int d = 0; d < 4; d++)
    {
        int ni = i + dx[d];
        int nj = j + dy[d];
        
        if (ni >= 0 && ni < h && nj >= 0 && nj < w && 
            !vis[ni][nj] && grid[ni][nj] == '.')
        {
            dfs(ni, nj, borda);
        }
    }
}

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);
    
    cin >> h >> w;
    
    for (int i = 0; i < h; i++)
        cin >> grid[i];
    
    int cont = 0;
    
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                bool borda = false;
                dfs(i, j, &borda);
                
                if (!borda)
                    cont++;
            }
        }
    }
    
    cout << cont << '\n';
    
    return 0;
}
