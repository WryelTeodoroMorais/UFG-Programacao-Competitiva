#include <iostream>
using namespace std;

int main()
{
    char *s;
    int tam = 0, aux = 0, maior = 0;
    cin >> s;
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'A')
            aux++;
        if (aux != 0)
            tam++;
        if (s[i] == 'Z')
            if (tam > maior)
                maior = tam;
    }

    cout << maior << endl;

    return 0;
}