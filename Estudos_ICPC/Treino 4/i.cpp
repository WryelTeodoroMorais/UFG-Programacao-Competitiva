#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maior = 0, aux = 0;
    cin >> n;
    vector <int> vetor(n);

    for (int i = 0; i < n; i++) 
        cin >> vetor[i];        
       
    for (int i = 1; i < n; i++)  
    {
        if (vetor[i] <= vetor[i-1])
        {
            aux++;
            maior = max(maior, aux);
        }
        else
            aux = 0;
    }     
    
    cout << maior << endl;

    return 0;
}