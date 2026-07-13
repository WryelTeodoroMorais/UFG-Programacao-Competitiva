#include <bits/stdc++.h>
using namespace std;

set <string> s;

void rec(string n) 
{
    s.insert(n);

    if (next_permutation(n.begin(), n.end()))
        rec(n);
    else
        return;
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;

    cin >> n;
    sort(n.begin(), n.end());

    rec(n);

    cout << s.size();

    for (auto i : s) 
        cout << '\n' << i;

    cout << '\n';

    return 0;
}