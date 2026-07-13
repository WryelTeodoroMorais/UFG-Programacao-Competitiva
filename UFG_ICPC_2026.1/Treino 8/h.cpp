#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;

    map <int, int> freq;

    for(int i=0; i<n-1; i++)
    {
        int a,b;
        cin >> a >> b;
        freq[a]++;
        freq[b]++;
    }

    for (auto it : freq)
    {
        if (it.second == n-1)
        {
            cout << "Yes\n";
            return 0;
        }
    }
    
    cout << "No\n";

    return 0;
}   