#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, d, aux, dist, cont = 0;
    cin >> n >> d;
    int matriz[n][d] = {0};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < d; j++)
            cin >> matriz[i][j];

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            {
                dist = 0;
                for (int m = 0; m < d; m++)
                    dist += pow(matriz[i][m] - matriz[j][m], 2);
                aux = pow(dist, 0.5);
                if (aux * aux == dist)
                    cont++;
            }
            
    cout << cont << endl;

    return 0;
}