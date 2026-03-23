#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, primeiro = 0, segundo = 0;
    cin >> n;
    vector <int> vetor(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> vetor[i];
        if (vetor[i] > primeiro)
        {
            segundo = primeiro;
            primeiro = vetor[i];
        }
        else if (vetor[i] > segundo)
            segundo = vetor[i];
    }              
       
    for (int i = 0; i < n; i++)  
    {
        if (vetor[i] != primeiro)
            cout << primeiro << endl;
        else
            cout << segundo << endl;
    }          

    return 0;
}