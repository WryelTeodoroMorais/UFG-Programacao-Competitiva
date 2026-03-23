#include <iostream>
using namespace std;

int main()
{
    int n, q, pos, sum = 0;
    cin >> n >> q;
    string s;
    char letra;
    cin >> s;

    for (int j = 0; j < n - 2; j++)
        if (s[j] == 'A' && s[j+1] == 'B' && s[j+2] == 'C')
            sum++;

    for (int i = 0; i < q; i++)
    {
        int aux1 = 0, aux2 = 0;
        cin >> pos >> letra;

        if (s[pos-1] != letra)
        {
            for (int j = pos - 3; j < pos + 2; j++)
                if (s[j] == 'A' && s[j+1] == 'B' && s[j+2] == 'C')
                    aux1++;

            s[pos-1] = letra;

            for (int j = pos - 3; j < pos + 2; j++)
                if (s[j] == 'A' && s[j+1] == 'B' && s[j+2] == 'C')
                    aux2++;
        }

        sum += aux2 - aux1;
        cout << sum << endl;
    }

    return 0;
}