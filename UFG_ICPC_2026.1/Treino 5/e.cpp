#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, q, aux, dir, esq;
    cin >> n;
    vector <int> lojas(n);

    for (int i = 0; i < n; i++) 
        cin >> lojas[i];

    sort(lojas.begin(), lojas.end());
    cin >> q;

    for (int i = 0; i < q; i++) 
    {
        cin >> aux;
        auto result = upper_bound(lojas.begin(), lojas.end(), aux);
        cout << result - lojas.begin() << "\n";
    }

    return 0;
}