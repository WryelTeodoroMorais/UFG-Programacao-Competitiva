#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long int n, m, impares, pares;
    int t, k, cont;
    cin >> t;

    for (unsigned long long int i = 0; i < t; i++)
    {
        cont = 0;
        cin >> n >> m >> k;

        for (unsigned long long int j = n; j <= m; j++)
        {
            impares = j & 0xAAAAAAAAAAAAAAAA;
            pares = j & 0x5555555555555555;

            if (abs(__builtin_popcountll(impares) - __builtin_popcountll(pares)) == k)
                cont++;
        }

        cout << cont << '\n';
    }

    return 0;
}