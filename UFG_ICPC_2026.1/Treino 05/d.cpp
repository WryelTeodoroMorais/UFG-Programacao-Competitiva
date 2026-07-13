#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, tempo, total = 0, maior = 0;
    cin >> n >> tempo;
    vector <int> livro(n);

    for (int i = 0; i < n; i++) 
        cin >> livro[i];

    int dir = 0, esq = 0;

    for (; dir < n; dir++)
    {
        total += livro[dir];

        while (tempo < total)
        {
            total -= livro[esq];
            esq++;
        }

        maior = max(maior, dir - esq + 1);
    }

    cout << maior << "\n";

    return 0;
}