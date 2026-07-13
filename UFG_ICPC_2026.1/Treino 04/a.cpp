#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int rec (int a, int b, int c, int k, int soma)
{
    if (k == 0)
        return soma;

    if (a > 0)
        soma += rec(a-1, b, c, k-1, 1);
    else if (b > 0)
        soma += rec(0, b - 1, c, k-1, 0);
    else if (c > 0)
        soma += rec(0, 0, c - 1, k-1, -1);

    return soma;
}
      

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int a, b, c, k, final;
    cin >> a >> b >> c >> k;

    final = rec(a, b, c, k, 0);

    cout << final << '\n';
}