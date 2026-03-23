#include <iostream>
using namespace std;

int main()
{
    long int n;
    cin >> n;
    long int vetor[n], aux;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        vetor[aux - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
        cout << vetor[i] << endl;

    return 0;
}