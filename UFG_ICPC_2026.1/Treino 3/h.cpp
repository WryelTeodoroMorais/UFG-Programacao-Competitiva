#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, aux;
    long long int mask = 4294967295;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        cout << (aux ^ mask) << '\n';
    }

    return 0;
}