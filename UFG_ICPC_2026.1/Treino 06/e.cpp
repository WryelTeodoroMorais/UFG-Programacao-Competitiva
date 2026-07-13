#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, menor = 1e9, aux;
    cin >> n;
    vector <int> v(n+1), soma(n+1);

    int dir = n, esq = 0;
    soma[0] = 0;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        soma[i] = soma[i-1] + v[i];
    
    for (int i = 0; i <= n; i++)
    {
        aux = abs(soma[i] - (soma[n] - soma[i]));
        menor = min(menor, aux);
    }

    cout << menor << "\n";

    return 0;
}
    