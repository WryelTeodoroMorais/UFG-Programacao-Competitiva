#include <bits/stdc++.h>
using namespace std;
#define MAX 100010

typedef long long int ll;

int a[MAX];
ll pref[MAX];
map<int,ll> cnt;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        for(int i=1; i<=n; i++)
        {
            char c;
            cin >> c;
            a[i] = c-'0';
        }

        pref[0] = 0;

        for(int i=1; i<=n; i++) 
            pref[i] = pref[i-1] + a[i];

        ll ans = 0;
        cnt[0]++;

        for(int r=1; r<=n; r++)
        {
            int x = pref[r] - r;
            ans += cnt[x];
            cnt[x]++;
        }

        cout << ans << '\n';
        cnt.clear();
    }
    
    return 0;
}

