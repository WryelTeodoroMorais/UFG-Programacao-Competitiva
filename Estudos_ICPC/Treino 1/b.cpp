#include <iostream>
using namespace std;

const int MAX = 1e9;
typedef struct 
{
    string nome;
    int idade;
}Pessoa;

int main()
{
    int n, pos, menor = MAX, j = 0;
    cin >> n;
    Pessoa p[n];

    while (j < n)
    {
        cin >> p[j].nome >> p[j].idade;
        if (p[j].idade < menor)
            menor = p[j].idade;
        j++;
    }

    for (int i = 0; i < n; i++)
    {
        if (p[i].idade == menor)
            pos = i;
    }

    for (int i = pos; i < n + pos; i++)
        cout << p[i % n].nome << endl;
    
    return 0;
}