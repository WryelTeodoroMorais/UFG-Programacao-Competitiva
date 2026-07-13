#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, m, k, cont = 0;
    cin >> n >> m >> k;
    vector <int> pessoas(n), apartamentos(m);

    for (int i = 0; i < n; i++) 
        cin >> pessoas[i];

    for (int i = 0; i < m; i++) 
        cin >> apartamentos[i];

    sort(pessoas.begin(), pessoas.end());
    sort(apartamentos.begin(), apartamentos.end());

    int dir = 0;

    for (int i = 0; i < n; i++)
    {
        while (dir < m && pessoas[i] > apartamentos[dir] + k) 
            dir++;

        if (dir >= m) 
            break;
            
        if (pessoas[i] <= apartamentos[dir] + k && pessoas[i] >= apartamentos[dir] - k)
        {
            cont++;
            dir++;
        }
    }

    cout << cont << "\n";

    return 0;
}