#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, tam, aux, chave, valor, result, temp;
    map <int, int> freq;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tam;
        result = 0;

        for (int j = 0; j < tam; j++)
        {
            cin >> aux;
            freq[aux]++;
        }

        for (auto &it : freq)
        {
            chave = it.first;
            valor = it.second;
            temp = valor;

            if (freq.count(chave + 1))
                temp += freq[chave + 1];
                
            result = max(result, temp);
           
        }

        freq.clear();
        cout << result << endl;
    }

    return 0;
}