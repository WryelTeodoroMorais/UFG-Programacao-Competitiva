#include <bits/stdc++.h>
using namespace std;

int main()
{;
    int n, one, two, cont = 0, maior = 0;
    cin >> n >> one;

    for (int i = 1; i < n; i++)
    {
        cin >> two;

        if (one >= two)
            cont++;
        else
            cont = 0;

        maior = max(maior, cont);
        one = two;
    }

    cout << maior << '\n';

    return 0;
}