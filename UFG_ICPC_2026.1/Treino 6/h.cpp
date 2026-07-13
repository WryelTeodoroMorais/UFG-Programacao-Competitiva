#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int maior, n;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        int tam, val, aux = 0, cont = 0;
        maior = 1e8;
        cin >> tam >> val;
        string s;
        cin >> s;

        for (int j = 0; j < tam; j++)
        {
            if (j >= val)
            {
                maior = min(maior, aux);

                if (s[j - val] == 'B')
                    cont--;
                else
                    aux--;
            }
            
            if (s[j] == 'B')
                cont++;
            else
                aux++;
        }

        maior = min(maior, aux);
        cout << maior << "\n";
    }
}