#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, aux;
    set <int> set;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        set.insert(aux);
    }

    cout << set.size() << '\n';

    return 0;
}