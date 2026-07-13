#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, n, f;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> n;
        
        if (n % 3 == 0)
            cout << a << '\n';
        else if (n % 3 == 1)
            cout << b << '\n';
        else
            cout << (a ^ b) << '\n';
    }

    return 0;
}