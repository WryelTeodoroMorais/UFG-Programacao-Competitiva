#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        long long tam1, tam2, aux;
        cin >> tam1 >> tam2;
        vector <long long> soma(tam1+1), degrau_max(tam1+1);
        soma[0] = 0, degrau_max[0] = 0;

        for (int j = 1; j <= tam1; j++)
        {
            cin >> aux;
            soma[j] = soma[j-1] + aux;
            degrau_max[j] = max(degrau_max[j-1], aux);
        }
        
        for (int j = 0; j < tam2; j++)
        {
            cin >> aux;
            auto it = upper_bound(degrau_max.begin(), degrau_max.end(), aux);
            int ind = distance(degrau_max.begin(), it);

            cout << soma[ind-1] << " ";
        }

        cout << "\n";
    }

    return 0;
}