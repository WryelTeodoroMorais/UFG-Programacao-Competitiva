#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long int alvo, aux;

    cin >> n >> alvo;
    
    vector <long int> numbers(n);
    map <long int, long int> freq;

    for (int i = 0; i < n; i++) 
        cin >> numbers[i];
   
    for (int i = 0; i < n; i++)
    {
        aux = alvo - numbers[i];
        if (freq.count(aux))
        {
            cout << freq[aux] + 1 << ' ' << i + 1 << endl;
            return 0;
        }
        else
            freq[numbers[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}