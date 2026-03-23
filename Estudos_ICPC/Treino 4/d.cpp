#include <iostream>
using namespace std;

int main()
{
    int n, soma = 0, menor = 10e6;
    cin >> n;
    int vetor[n];

    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
        if (vetor[i] < menor)
        {
            soma++;
            menor = vetor[i];
        }
    }
        
    cout << soma << endl;

    return 0;
}