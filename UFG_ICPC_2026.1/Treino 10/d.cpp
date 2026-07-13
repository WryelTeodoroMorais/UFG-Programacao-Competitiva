#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, w, cont = 0;
    cin >> n >> w;
    vector <int> v(n), bons(w+1, 0);

    for(int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i < n; i++)
    {
        if (v[i] <= w)
            bons[v[i]]++;

        for (int j = i + 1; j < n; j++)
        {
            int temp1 = v[i] + v[j];
            if (temp1 <= w)
                bons[temp1]++;

            for (int k = j + 1; k < n; k++)
            {
                int temp2 = temp1 + v[k];
                if (temp2 <= w)
                    bons[temp2]++;
            }
        }
    }

    for (int i = 1; i <= w; i++)
        if (bons[i])
            cont++;

    cout << cont << '\n';

    return 0;
}