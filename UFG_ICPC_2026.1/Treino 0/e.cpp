#include <iostream>
using namespace std;

int main()
{
    int t, n, aux, cont;
    long long int menor, sum;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cont = 0;
        sum = 0;
        menor = 1e9;
        cin >> n;

        for (int j = 0; j < n; j++)
        {
            cin >> aux;
            if (aux < 0)
                cont++;
            aux = abs(aux);
            if (aux < menor)
                menor = aux;
            sum += aux;
        }

        if (cont % 2 == 0)
            cout << sum << endl;
        else
            cout << sum - 2 * menor << endl;
    }

    return 0;
}