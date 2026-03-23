#include <iostream>
using namespace std;

int main()
{
    int n, q, a, b;
    cin >> n >> q;
    long int vetor[n], soma[n+1] = {0}, result[q];

    for (int i = 0; i < n; i++)
        cin >> vetor[i];

    for (int i = 1; i <= n; i++)
        soma[i] = soma[i - 1] + vetor[i -1];

    for (int i = 0; i < q; i++)
    {
        cin >> a >> b;
        result[i] = soma[b] - soma[a - 1];
    }
    
    for (int i = 0; i < q; i++)
        cout << result[i] << endl;

    return 0;
}