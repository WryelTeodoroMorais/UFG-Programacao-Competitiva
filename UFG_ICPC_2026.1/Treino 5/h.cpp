#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m, maior = 0, aux;
    cin >> n >> m;
    vector <int> gifs(n);

    for (int i = 0; i < n; i++) 
        cin >> gifs[i];

    sort(gifs.begin(), gifs.end());
    
    for (int i = 0; i < n; i++)
    {
        auto intervalo1 = upper_bound(gifs.begin(), gifs.end(), gifs[i] + m - 1);
        auto intervalo2 = lower_bound(gifs.begin(), gifs.end(), gifs[i]);

        aux = intervalo1 - intervalo2;
        maior = max(maior, aux);
    }
        
    cout << maior << "\n";

    return 0;
}