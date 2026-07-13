#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    long long n;
    cin >> n;

    long long pos = (n * n + 1) / 2;

    long long esq = 1, dir = n * n;

    while (esq < dir) 
    {
        long long mid = (esq + dir) / 2;
        long long count = 0;
        
        for (long long i = 1; i <= n; i++) 
            count += min(n, mid / i);

        if (count >= pos) 
            dir = mid;
        else 
            esq = mid + 1;
    }

    cout << dir << "\n";
}