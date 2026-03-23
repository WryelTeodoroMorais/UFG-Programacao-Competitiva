#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long int alvo, aux1, aux2;

    cin >> n >> alvo;

    vector <long int> numbers(n);

    for (int i = 0; i < n; i++) 
        cin >> numbers[i];
   
    for (int i = 0; i < n - 2; i++)
    {
        map <long int, long int> freq;
        aux1 = alvo - numbers[i];
        for (int j = i + 1; j < n; j++)
        {
            aux2 = aux1 - numbers[j];
            if (freq.count(aux2))
            {
                cout << i + 1 << ' ' << freq[aux2] + 1 << ' ' << j + 1 << endl;
                return 0;
            }
            else
                freq[numbers[j]] = j;
        }
    }

    cout << "IMPOSSIBLE" << endl;

    return 0;
}