#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, k;
    cin >> n;
    vector <int> pedras(n+1);
    vector <long long> soma1(n+1), soma2(n+1);

    soma1[0] = 0, soma2[0] = 0;

    for (int i = 1; i <= n; i++)
        cin >> pedras[i];

    for (int i = 1; i <= n; i++)
        soma1[i] = soma1[i-1] + pedras[i];

    sort(pedras.begin(), pedras.end());

    for (int i = 1; i <= n; i++)
        soma2[i] = soma2[i-1] + pedras[i];

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int op, num1, num2;
        cin >> op >> num1 >> num2;

        if (op == 1)
            cout << soma1[num2] - soma1[num1 - 1] << "\n";
        else
            cout << soma2[num2] - soma2[num1 - 1] << "\n";
    }

    return 0;
}
    