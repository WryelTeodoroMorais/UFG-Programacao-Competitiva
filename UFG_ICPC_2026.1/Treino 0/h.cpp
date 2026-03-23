#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s1, s2;
    map <char, char> chave, valor;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.size(); i++)
    {
        if (chave.count(s1[i]) && chave[s1[i]] != s2[i])
        {
            cout << "No" << endl;
            return 0;
        }
        
        if (valor.count(s2[i]) && valor[s2[i]] != s1[i])
        {
            cout << "No" << endl;
            return 0;
        }

        chave[s1[i]] = s2[i];
        valor[s2[i]] = s1[i];
    }
    
    cout << "Yes" << endl;

    return 0;
}