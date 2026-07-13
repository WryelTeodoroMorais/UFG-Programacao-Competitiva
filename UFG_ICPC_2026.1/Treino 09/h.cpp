#include <bits/stdc++.h>
using namespace std;

#define MAX 200010

set <pair <int, int>> graph;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, m, a, b, cont = 0;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        if (a == b)
            cont++;
        else
        {
            if (graph.count({a, b}))
                cont++;
            else
            {
                graph.insert({a, b});
                graph.insert({b, a});
            }
        }
    }

    cout << cont << '\n';

    return 0;
}