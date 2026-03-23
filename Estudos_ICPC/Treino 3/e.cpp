#include <iostream>
using namespace std;

int main()
{
    int n, m, c, cont = 0, aux;
    cin >> n >> m >> c;
    int numbers[m], temp;

    for (int i = 0; i < m; i++)
        cin >> numbers[i];

    for (int i = 0; i < n; i++)
    {
        aux = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> temp;
            aux += temp * numbers[j];
        }
        if (aux + c > 0)
            cont++;
    }

    cout << cont << endl;

    return 0;
}