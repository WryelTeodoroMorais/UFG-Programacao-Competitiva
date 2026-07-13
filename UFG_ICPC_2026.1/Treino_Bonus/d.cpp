#include <bits/stdc++.h>
using namespace std;

int cont = 0;
int colunas[8], diagonal1[15], diagonal2[15];

void verifica_rainhas(vector <string> &tabuleiro, int linha) 
{
    if (linha == 8) 
    {
        cont++;
        return;
    }

    for (int i = 0; i < 8; i++) 
    {
        if (tabuleiro[linha][i] == '*')
            continue;
            
        if (colunas[i] || diagonal1[linha + i] || diagonal2[linha - i + 7])
            continue;

        colunas[i] = diagonal1[linha + i] = diagonal2[linha - i + 7] = 1;

        verifica_rainhas(tabuleiro, linha + 1);
    
        colunas[i] = diagonal1[linha + i] = diagonal2[linha - i + 7] = 0;
    }
}

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    vector <string> tabuleiro(8);

    for (int i = 0; i < 8; i++) 
        cin >> tabuleiro[i];

    verifica_rainhas(tabuleiro, 0);

    cout << cont << "\n";
}