#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, aux, minimo = 10e5, stamina;
    cin >> n;
    vector <int> pessoas(n);

    for (int i = 0; i < n; i++)
        cin >> pessoas[i];

    for (int i = *min_element(pessoas.begin(), pessoas.end());
    i <= *max_element(pessoas.begin(), pessoas.end()); i++)
    {
        stamina = 0;
        for (auto p : pessoas)
            stamina+= pow(p-i, 2);
        minimo = min(minimo, stamina);
    }
   
    cout << minimo << endl;

    return 0;
}