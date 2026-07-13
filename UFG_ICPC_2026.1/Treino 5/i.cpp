#include <bits/stdc++.h>
using namespace std;

#define MAX  200000+10

typedef long long int ll;

int k[MAX];

bool f(ll t, ll x, int n)
{
    for(int i = 0; i < n; i++)
    {
        ll produz = t / k[i];
        x -= produz;

        if (x <= 0) 
            return true;
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;

    for(int i = 0; i < n; i++) 
        cin >> k[i];

    ll l = 0, r = 1'000'000'000'000'000'000ll;
    ll ans;

    while(l <= r)
    {
        ll mid = (l + r) / 2;
        if(f(mid,t,n))
        {
            ans = mid;
            r = mid-1;
        }
        else 
            l = mid+1;
    }

    cout << ans << '\n';

    return 0;
}