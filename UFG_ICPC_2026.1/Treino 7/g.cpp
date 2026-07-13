#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

int visitado[MAX][MAX];
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
    queue<pair<int,int>> fila;

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cin >> aux;
            if (aux == '#')
            {
                visitado[i][j] = 0;
                fila.push(make_pair(i, j));
            }
            else
                visitado[i][j] = -1;
        }

    while(!fila.empty())
    {
        pair<int,int> p = fila.front();
        fila.pop();
        int z = visitado[p.first][p.second];
        
        for(int j=0; j<movimentos.size(); j++)
        {
            int x2 = p.first + movimentos[j].first;
            int y2 = p.second + movimentos[j].second;
            if(0 <= x2 && x2 < n && 0 <= y2 && y2 < m)
                if(visitado[x2][y2] == -1)
                {
                    visitado[x2][y2] = z + 1;
                    cont = max(cont, z + 1);
                    fila.push(make_pair(x2,y2));
                }
        }
    }

    cout << cont << "\n";

    return 0;
}