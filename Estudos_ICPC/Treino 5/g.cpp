#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, esq = 0, maior = 0;
    cin >> n;
    vector <long int> sons(n);
    unordered_set <long int> uniques;

    for (int i = 0; i < n; i++) 
        cin >> sons[i];
   
    for (int dir = 0; dir < n; dir++)
    {
        while (uniques.count(sons[dir]))
        {
            uniques.erase(sons[esq]);
            esq++;
        }

        uniques.insert(sons[dir]);
        maior = max(maior, int(uniques.size()));
    }

    cout << maior << endl;

    return 0;
}