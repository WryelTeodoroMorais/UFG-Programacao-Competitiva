#include <bits/stdc++.h>
using namespace std;

int sum = 0, i = 0;

void rec (int hp, vector <int> &golpes)
{
    sum += golpes[i++];

    if (sum >= hp)
    {
        cout << "Yes\n";
        return;
    }
    else
        if (i < golpes.size())
            rec(hp, golpes);
        else
        {
            cout << "No\n";
            return;
        }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int hp, n;

    cin >> hp >> n;
    vector <int> golpes(n);

    for (int i = 0; i < n; i++) 
        cin >> golpes[i];

    rec(hp, golpes);

    return 0;
}