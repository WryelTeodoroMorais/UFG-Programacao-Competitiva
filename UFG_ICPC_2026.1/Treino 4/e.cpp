#include <bits/stdc++.h>
using namespace std;

bool case1 = false, case2 = false; 
int i = 0;
set <char> unicos;

void rec (string s)
{
    if (i < s.size())
    {
        unicos.insert(s[i]);
        if (isupper(s[i]))
            case1 = true;
        else
            case2 = true;
    
        i++;
        rec(s);
    }
    else
    {
        if (case1 && case2 && unicos.size() == s.size())
            cout << "Yes\n";
        else
            cout << "No\n";
        return;
    }

}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;

    cin >> s;

    rec(s);

    return 0;
}