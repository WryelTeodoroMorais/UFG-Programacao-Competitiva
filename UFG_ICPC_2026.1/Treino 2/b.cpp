#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
        if (i != 0)
            if (numbers[i] <= numbers[i-1])
            {
                cout << "NO" << '\n';
                return 0;
            }
    }

    cout << "YES" << '\n';

    return 0;
}