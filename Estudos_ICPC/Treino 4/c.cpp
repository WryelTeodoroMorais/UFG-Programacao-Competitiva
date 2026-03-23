#include <iostream>
using namespace std;

int main()
{
    int soma = 0;
    char *s;
    cin >> s;

    for (int i = 1; s[i] != '\0'; i++)
    {
        if (s[i] == s[i - 1])
        {
            if (s[i] == '0')
                s[i] = '1';
            else
                s[i] = '0';
            soma++;
        }
    }
       
    cout << soma << endl;

    return 0;
}