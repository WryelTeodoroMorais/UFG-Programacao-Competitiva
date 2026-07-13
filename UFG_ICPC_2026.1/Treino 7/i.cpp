#include <bits/stdc++.h>
using namespace std;

#define MAX 1010

int qtd_movs[MAX][MAX];
vector<pair<int,int>> movimentos = {
    {-2,1},{-2,-1},{2,1},{2,-1},{1,2},{1,-2},{-1,2},{-1,-2}
};

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a = 1, b = 1;

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            qtd_movs[i][j] = -1;
        
    qtd_movs[a][b] = 0;
    queue<pair<int,int>> pos;
    pos.push(make_pair(a,b));

    while(!pos.empty())
    {
        pair<int,int> p = pos.front();
        pos.pop();
        // p -> {x,y}
        int z = qtd_movs[p.first][p.second];
        
        for(int j=0; j<movimentos.size(); j++)
        {
            int x2 = p.first + movimentos[j].first;
            int y2 = p.second + movimentos[j].second;
            if(1 <= x2 && x2 <= n && 1 <= y2 && y2 <= n)
                if(qtd_movs[x2][y2] == -1)
                {
                    qtd_movs[x2][y2] = z+1;
                    pos.push(make_pair(x2,y2));
                }
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
            cout << qtd_movs[i][j] << ' ';
        
        cout << '\n';
    }

    return 0;
}