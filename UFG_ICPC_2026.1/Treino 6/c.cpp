#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int tam, alvo, aux, maior = 0;
        cin >> tam >> alvo;
        vector <int> nums(tam+1), soma(tam+1);
        soma[0] = 0;
        int esq = 0;

        for (int j = 1; j <= tam; j++)
        {
            cin >> nums[j];
            soma[j] = soma[j-1] + nums[j];
        }
        
        if (soma[tam] < alvo)
            cout << -1 << "\n";
        else if (soma[tam] == alvo)
            cout << 0 << "\n";
        else
        {
           for (int dir = 1; dir <= tam; dir++) 
           {
                aux = soma[dir] - soma[esq];

                while (aux > alvo) 
                { 
                    esq++;
                    aux = soma[dir] - soma[esq];
                }

                if (aux == alvo) 
                    maior = max(maior, dir - esq);
            }

            cout << tam - maior << "\n";
        }
    }

    return 0;
}