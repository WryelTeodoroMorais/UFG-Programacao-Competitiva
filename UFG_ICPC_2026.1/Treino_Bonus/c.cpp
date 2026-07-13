#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, m, aux, maior, cont;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        cin >> m;
        maior = 0;
        cont = 0;

        vector <int> numbers(m);

        for (int j = 0; j < m; j++) 
            cin >> numbers[j];

        for (int j = 0; j < m - 1; j++)
        {
            if (numbers[j] > numbers[j + 1]) 
            {
                aux = numbers[j] - numbers[j + 1];
                numbers[j + 1] += aux;
                maior = max(maior, aux);
            } 
        }
    
        while (maior > 0)
        {
           maior = maior / 2;
           cont++;
        }

        cout << cont << "\n";
    }

    return 0;
}