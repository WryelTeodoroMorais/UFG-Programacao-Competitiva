#include <bits/stdc++.h>
using namespace std;

int main()
{ 
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    multiset<int> topos;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;

        auto it = topos.upper_bound(a);
        
        if (it == topos.end())
            topos.insert(a);
        else
        {
            topos.erase(it);
            topos.insert(a);
        }
    }

    cout << topos.size() << '\n';

    return 0;
}