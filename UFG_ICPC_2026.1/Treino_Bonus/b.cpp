#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector <int> books(n);

    for (int i = 0; i < n; i++) 
        cin >> books[i];
        
    long long maior = *max_element(books.begin(), books.end());
    long long soma = accumulate(books.begin(), books.end(), 0LL);

    cout << max(maior * 2, soma) << "\n";

    return 0;
}