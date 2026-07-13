#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int casos, n, l, r;
    cin >> casos;

    for (int i = 0; i < casos; i++) 
    {
        cin >> n >> l >> r;
        vector <int> v(n);
        long long cont = 0;
        
        for (int j = 0; j < n; j++)
            cin >> v[j];

        sort(v.begin(), v.end());
        
        for (int j = 0; j < n - 1; j++)
        {
            int dir = r - v[j], esq = l - v[j];

            auto it = upper_bound(v.begin() + j + 1, v.end(), dir);
            auto it2 = lower_bound(v.begin() + j + 1, v.end(), esq);

            cont += (it - it2);
        }

        cout << cont << "\n";
    }

    return 0;
}