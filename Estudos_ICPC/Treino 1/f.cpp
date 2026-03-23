#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, maior = 0, aux = 0;
    cin >> n;
    int angulos[n], cortes[n+1];
    cortes[0] = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> angulos[i];
        aux = (aux + angulos[i]) % 360;
        cortes[i+1] = aux;
    }

    sort(cortes, cortes + 1 + n);
    for (int i = 1; i < n + 1; i++) 
        maior = max(maior, cortes[i] - cortes[i - 1]);

    maior = max(maior, 360 - cortes[n]);

    cout << maior << endl;

    return 0;
}