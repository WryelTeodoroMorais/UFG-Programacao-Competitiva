#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string par(s.size(), '0'), impar(s.size(), '0');
    int dif1 = 0, dif2 = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            par[i] = '0';
            impar[i] = '1';
        }   
        else
        {
            par[i] = '1';
            impar[i] = '0';
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != par[i])
            dif1++;

        if (s[i] != impar[i])
            dif2++;
    }

    cout << min(dif1, dif2) << "\n";

    return 0;
}