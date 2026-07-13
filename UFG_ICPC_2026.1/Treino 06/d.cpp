#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector <int> v(n+1), somaxor(n+1);

    somaxor[0] = 0;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        somaxor[i] = somaxor[i-1] ^ v[i];

    for (int i = 0; i < k; i++)
    {
        int num1, num2;
        cin >> num1 >> num2;

        cout << (somaxor[num2] ^ somaxor[num1 - 1]) << "\n";
    }

    return 0;
}