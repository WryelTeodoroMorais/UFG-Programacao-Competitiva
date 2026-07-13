#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    long long sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long n1, n2;
        cin >> n1 >> n2;

        sum += (n1 + n2) * (n2 - n1 + 1) / 2;
    }
    
    cout << sum << "\n";

    return 0;
}