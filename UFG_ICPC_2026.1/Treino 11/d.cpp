#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n;
    cin >> n;
    map <string, int> freq;;
    
    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        freq[s]++;
        if (freq[s] == 1)
            cout << s << '\n';
        else
            cout << s << '(' << freq[s] - 1 << ")\n";
    }

    return 0;
}