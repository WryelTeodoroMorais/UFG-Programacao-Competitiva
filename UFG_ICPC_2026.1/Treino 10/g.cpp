#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, maior = -1, aux, ind = 0;
    cin >> n;
    string s;
    set <string> sub;

    for(int i=0; i<n; i++)
    {
        cin >> s >> aux;

        if (sub.count(s))
            continue;
        else
        {
            sub.insert(s);
            if (aux > maior)
            {
                maior = aux;
                ind = i + 1;
            }
        }
    }

    cout << ind << '\n';

    return 0;
}