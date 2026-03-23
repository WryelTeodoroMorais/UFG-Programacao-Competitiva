#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char *s, *t;
    cin >> s >> t;
    int tam1 = strlen(s), tam2 = strlen(t);
    int aux, min = 1000;
    
    for (int i = 0; i <= tam1 - tam2; i++)
    {
        aux = 0;
        for (int j = 0; j < tam2; j++)
            if (s[i + j] != t[j])
                aux++;
        if (aux < min)
            min = aux;
    }
    
    cout << min << endl;

    return 0;
}