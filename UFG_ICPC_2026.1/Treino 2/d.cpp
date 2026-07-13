#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (b > a)
        cout << b - a + 1 << '\n';
    else
        cout << 0 << '\n';

    return 0;
}