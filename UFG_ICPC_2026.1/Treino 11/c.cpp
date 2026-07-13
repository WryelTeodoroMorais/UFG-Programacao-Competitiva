#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, m, menor = 1000000, cont = 0;
    cin >> n >> m;
    int matriz[101][101];

    for(int i=0; i<n; i++)
        for (int j=0; j<m; j++)
        {
            cin >> matriz[i][j];
            if (matriz[i][j] < menor)
                menor = matriz[i][j];
        }

    for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
            cont += matriz[i][j] - menor;


    cout << cont << '\n';

    return 0;
}