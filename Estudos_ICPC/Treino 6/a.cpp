#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, pot = 0;
    cin >> n;
   
    while ((1LL << pot) <= n) 
        pot++;
    
    cout << pot - 1 << endl;

    return 0;
}