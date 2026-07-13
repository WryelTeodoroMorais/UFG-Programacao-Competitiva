#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n, d, maior = 0, seq = 0;
    cin >> n >> d;
    vector <int> palavras(d, 0);

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < d; j++) 
        {
            char letra;
            cin >> letra;

            if (letra == 'x')
                palavras[j] = 1;
        }
    
    for (int i = 0; i < d; i++)
    {
        if (palavras[i] == 0) 
            seq++;
        else
            seq = 0;

        maior = max(maior, seq);
    }
    
    cout << maior << "\n";

    return 0;
}