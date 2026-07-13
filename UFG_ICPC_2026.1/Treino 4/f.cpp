#include <bits/stdc++.h>
using namespace std;

int rec (vector <int> &restos, int resto, int cont, int i)
{
    if (resto % 3 == 0)
        return cont;

    if (i == restos.size())
        return 3;

    int remove = rec(restos, (resto - restos[i] + 3) % 3, cont + 1, i + 1);
    int pula = rec(restos, resto, cont, i + 1); 

    return min(remove, pula);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long num;
    int final, resto, tam;
    vector <int> restos;

    cin >> num;
    string snum = to_string(num);
    tam = snum.size();

    for (int i = 0; i < tam; i++)
    {
        int aux = (snum[i] - '0') % 3;
        if (aux != 0)
            restos.push_back(aux);
    }

    sort(restos.begin(), restos.end());

    resto = accumulate(restos.begin(), restos.end(), 0) % 3;
    if (resto == 0)
    {
        cout << "0\n";
        return 0;
    }

    final = rec(restos, resto, 0, 0);
    if (final == 3 || final == tam)
        final = -1;

    cout << final << "\n";

    return 0;
}