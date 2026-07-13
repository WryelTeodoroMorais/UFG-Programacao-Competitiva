#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, doces, maior = 0, pos;
    cin >> n >> doces;
    vector <int> criancas (n);

    for (int i = 0; i < n; i++)
        cin >> criancas[i];
    
    for (int i = 0; i < n; i++)
    {
        if (criancas[i] % doces == 0)
            criancas[i]--;

        if (((criancas[i]) / doces) >= (maior / doces)) 
        {
            maior = criancas[i];
            pos = i + 1;
        }
    }

    cout << pos << '\n';

    return 0;
}