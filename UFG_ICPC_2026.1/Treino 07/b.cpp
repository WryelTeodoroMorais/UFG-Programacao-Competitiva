#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

int visitado[MAX][MAX];
char grid[MAX][MAX];
vector<pair<int,int>> movimentos = {
    {0,1},{1, 0},{-1,0},{0,-1}
};

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, m, cont = 0;
    char aux;
    cin >> n >> m;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> grid[i][j];

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            if (grid[i][j] == '.' && visitado[i][j] == 0)
            {
                cont++;
                queue<pair<int,int>> fila;

                fila.push({i,j});
                visitado[i][j] = 1;

                while(!fila.empty())
                {
                    auto p = fila.front();
                    fila.pop();
                    
                    for(int j=0; j<movimentos.size(); j++)
                    {
                        int x2 = p.first + movimentos[j].first;
                        int y2 = p.second + movimentos[j].second;
                        if(0 <= x2 && x2 < n && 0 <= y2 && y2 < m)
                            if(grid[x2][y2] == '.' && visitado[x2][y2] == 0)
                            {
                                visitado[x2][y2] = 1;
                                fila.push(make_pair(x2,y2));
                            }
                    }
                }
            }
        }

    cout << cont << "\n";

    return 0;
}