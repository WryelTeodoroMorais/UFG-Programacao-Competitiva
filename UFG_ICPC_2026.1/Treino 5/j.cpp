#include <bits/stdc++.h>
using namespace std;

#define MAX 200000+10

pair<int,int> a[MAX];

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n,x;
    cin >> n >> x;

    for(int i = 0; i < n; i++) 
        cin >> a[i].first;

    for(int i = 0; i < n; i++) 
        a[i].second = i + 1;  

    sort(a,a + n);

    int l = 0,r = n - 1;

    while(l < r)
    {
        int sum = a[l].first + a[r].first;
        if(sum == x)
        {
            cout << a[r].second << ' ' << a[l].second << '\n';
            return 0;
        }
        else if(sum < x) 
            l++;
        else if(sum > x) 
            r--;
    }

    cout << "IMPOSSIBLE" << '\n';

    return 0;
}