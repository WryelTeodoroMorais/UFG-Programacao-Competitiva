#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    long long a, b, k, cont = 0;
    cin >> a >> b >> k;

    while (a < b)
    {
        a*=k;
        cont++;
    }
    
    cout << cont << "\n";

    return 0;
}