#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;
    vector <int> cabeca(n);
    vector <int> corpo(m);
    
    for (int i=0; i<n; i++)
        cin >> cabeca[i];

    for (int i=0; i<m; i++)
        cin >> corpo[i];
    
    sort(corpo.begin(), corpo.end());
    sort(cabeca.begin(), cabeca.end());

    int ans = 0, i, cab = 0, cor = 0;

    while (cab < n && cor < m)
    {
        if (cabeca[cab] <= corpo[cor])
            ans++, cab++, cor++;
        else
            cor++;
    }
    
    if (ans >= k)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}