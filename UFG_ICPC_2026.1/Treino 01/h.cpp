#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << '1' << '\n';
        return 0;
    }

    if (n < 4)
    {
        cout << "NO SOLUTION" << '\n';
        return 0;
    }

    vector <int> vet(n);
    int aux = 2;

    for (int i = 0; i < n; i++)
        vet[i] = i+1;

    for (int i = 0; i < n; i++)
    {
        cout << aux << ' ';
        aux+=2;

        if (aux > n)
            aux = 1;
    }

    cout << '\n';

    return 0;
}