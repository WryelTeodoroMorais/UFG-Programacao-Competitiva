#include <bits/stdc++.h>
using namespace std;
#define MAX 200010

typedef long long int ll;

int v[MAX];
ll pref[MAX];

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,q;
    cin >> n >> q;

    for(int i=1; i<=n; i++) 
        cin >> v[i];

    pref[0] = 0;

    for(int i=1; i<=n; i++) 
        pref[i] = pref[i-1] + v[i];

    for(int i=0; i<q; i++)
    {
        int a,b;
        cin >> a >> b;
        cout << pref[b] - pref[a-1] << '\n';
    }
    
    return 0;
}

