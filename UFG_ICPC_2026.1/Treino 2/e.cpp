#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, aux;
    cin >> n;
    vector <int> numbers;
    set <int> unicos;

    for (int i = 0; i < n; i++)
    {
        int tam;
        cin >> tam;

        for (int i = 0; i < tam; i++)
        {
            cin >> aux;
            numbers.push_back(aux);
            unicos.insert(aux);
        }
        
        if (unicos.size() != numbers.size())
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';

        numbers.clear();
        unicos.clear();
    }

    return 0;
}