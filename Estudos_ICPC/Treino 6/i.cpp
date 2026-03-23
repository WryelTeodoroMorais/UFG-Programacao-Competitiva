#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag;
    cin >> n;
    vector <long int> a(n), s(n);
    long int x, y;

    for (int i = 0; i < n; i++)
        cin >> a[i] >> s[i];

    for (int i = 0; i < n; i++)
    {
        flag = 0;
        
        for (int j = 0; j <= s[i]; j++)
        {
            x = j;
            y = s[i] - x;
            if ((x & y) == a[i])
            {
                cout << "YES" << endl;
                flag = 1;
            }
        }

        if (flag == 0)
            cout << "NO" << endl;
    }

    return 0;
}