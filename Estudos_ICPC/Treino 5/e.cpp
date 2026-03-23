#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, cont = 0;
    long int x;

    cin >> n >> x;
    
    int aux = n - 1;
    vector <long int> pesos(n);

    for (int i = 0; i < n; i++) 
        cin >> pesos[i];

    sort(pesos.begin(), pesos.end());
   
    while (i <= aux) 
    {
        if (pesos[i] + pesos[aux] <= x)
            i++;        
        aux--;          
        cont++;
    }

    cout << cont << endl;

    return 0;
}