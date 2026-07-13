#include <bits/stdc++.h>
using namespace std;

bool verificar(const string& s, const string& subs, int pos1, int pos2) 
{
    if (pos2 == subs.size()) 
        return true;

    if (s[pos1] == '?' || s[pos1] == subs[pos2]) 
        return verificar(s, subs, pos1 + 1, pos2 + 1);

    return false;
}

int main() 
{
    string s, subs;
    cin >> s >> subs;

    int tam1 = s.size();
    int tam2 = subs.size();
    bool possivel = false;

    for (int i = 0; i <= tam1 - tam2; i++) 
        if (verificar(s, subs, i, 0)) 
        {
            cout << "Yes\n";
            return 0;
        }

    cout << "No\n";

    return 0;
}