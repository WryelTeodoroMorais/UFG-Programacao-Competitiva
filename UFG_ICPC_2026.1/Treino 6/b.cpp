#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, k, ind = 1, soma = 0, menor = 1e9;
    cin >> n >> k;
    vector <int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    if (n == k)
    {
        cout << 1 << "\n";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        if (i >= k)
        {
            if (soma < menor)
            {
                menor = soma;
                ind = i - k + 1;
            }

            soma-=v[i-k];
        }

        soma+=v[i];
    }
    
    if (soma < menor)
        ind = n - k + 1;

    cout << ind << "\n";

    return 0;
}
    