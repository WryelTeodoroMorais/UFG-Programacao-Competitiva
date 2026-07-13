#include <bits/stdc++.h>
using namespace std;

#define MAX 1000

int visitado[MAX][MAX];
char grid[MAX][MAX];
char caminho[MAX][MAX];
char dir[4] = {'R', 'D', 'U', 'L'};

vector<pair<int, int>> movimentos = {
    {0, 1}, {1, 0}, {-1, 0}, {0, -1}};

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    pair <int, int> a, b;
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> fila;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            visitado[i][j] = -1;
            
            if (grid[i][j] == 'A')
            {
                a.first = i;
                a.second = j;
            }
            else if (grid[i][j] == 'B')
            {
                b.first = i;
                b.second = j;
            }
        }

    visitado[a.first][a.second] = 0;
    fila.push({a.first, a.second});

    while (!fila.empty())
    {
        auto p = fila.front();
        fila.pop();

        for (int j = 0; j < movimentos.size(); j++)
        {
            int x2 = p.first + movimentos[j].first;
            int y2 = p.second + movimentos[j].second;
            int z = visitado[p.first][p.second];

            if (0 <= x2 && x2 < n && 0 <= y2 && y2 < m)
                if ((grid[x2][y2] == '.' || grid[x2][y2] == 'B') && visitado[x2][y2] == -1)
                {
                    visitado[x2][y2] = z + 1;
                    caminho[x2][y2] = dir[j];
                    fila.push(make_pair(x2, y2));
                }
        }
    }

    if (visitado[b.first][b.second] == -1)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        cout << visitado[b.first][b.second] << "\n";

        string rota;

        int x = b.first;
        int y = b.second;

        while (make_pair(x, y) != a)
        {
            char c = caminho[x][y];

            rota += c;

            if (c == 'R') y--;
            else if (c == 'L') y++;
            else if (c == 'U') x++;
            else if (c == 'D') x--;
        }

        reverse(rota.begin(), rota.end());

        cout << rota << "\n";
    }

    return 0;
}