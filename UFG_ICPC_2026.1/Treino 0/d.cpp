#include <iostream>
using namespace std;

int main()
{
    long long int valorA, valorB, valorAB, qtdA, qtdB, a, b;
    cin >> valorA >> valorB >> valorAB >> qtdA >> qtdB;
    long long int menor = 1e12, valorTotal;

    for (int i = 0; i <= max(qtdA, qtdB); i++)
    {
        a = qtdA - i;
        b = qtdB - i;

        if (a < 0)
            a = 0;
        else if (b < 0)
            b = 0;

        valorTotal = valorA * a + valorB * b + 2 * i * valorAB;
        menor = min(menor, valorTotal);
    }
            
    cout << menor << endl;

    return 0;
}