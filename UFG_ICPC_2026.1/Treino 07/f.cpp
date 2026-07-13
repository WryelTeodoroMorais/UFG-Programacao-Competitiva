#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    int aux = n % 4;

    if (aux == 2)
        cout << n << "\n";
    else if (aux == 0)
        cout << n + 2 << "\n";
    else
        cout << n + aux << "\n";

    return 0;
}