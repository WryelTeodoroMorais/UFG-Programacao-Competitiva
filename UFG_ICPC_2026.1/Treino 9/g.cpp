#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int cont = 0, temp, i, j;
    string s;
    cin >> s;

    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            temp = 1;
            j = i;
            while (j+temp+temp < s.length())
            {
                if (s[j+temp] == 'B' && s[j+temp+temp] == 'C')
                    cont++;
                temp++;
            }
        }
    }

    cout << cont << '\n';

    return 0;
}