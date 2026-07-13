#include <bits/stdc++.h>
using namespace std;

int rec(int i) 
{
    if (i & 1) 
        return 1;

    return 1 + rec(i / 2); 
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int total_movimentos = (1 << n) - 1;

    for (int i = 1; i <= total_movimentos; i++) 
    {
        cout << rec(i);
        if (i != total_movimentos) 
            cout << ' ';
    }

    cout << '\n';

    return 0;
}