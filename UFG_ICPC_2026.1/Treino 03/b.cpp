#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, cont = 0, aux;
    cin >> n >> m >> k;
    vector <int> exercito(m+1);

    for (int i = 0; i <= m; i++)
        cin >> exercito[i];
    
    for (int i = 0; i < m; i++)
    {
        aux = exercito[i] ^ exercito[m];

        if (__builtin_popcount(aux) <= k)
            cont++;
    }

    cout << cont << '\n';

    return 0;
}