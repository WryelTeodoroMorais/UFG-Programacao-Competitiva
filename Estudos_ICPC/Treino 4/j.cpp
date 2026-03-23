#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maior = 0;
    cin >> n;
    vector <int> cima(n + 1, 0), baixo(n + 1, 0); 
    int matriz[2][n];

    for (int i = 0; i < 2; i++) 
        for (int j = 0; j < n; j++)
            cin >> matriz[i][j];
     
    for (int i = 1; i <= n; i++)
        cima[i] = cima[i - 1] + matriz[0][i - 1];
    
    for (int i = n - 1; i >= 0; i--)
        baixo[i] = baixo[i + 1] + matriz[1][i];

    for (int i = 0; i < n; i++)
        maior = max(maior, cima[i+1] + baixo[i]);

    cout << maior << endl;

    return 0;
}