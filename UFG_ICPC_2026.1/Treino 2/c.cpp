#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector <int> numbers(n);

    for (int i = 0; i < n; i++)
        cin >> numbers[i];

    for (int i = 0; i < k; i++)
    {
        vector <int> grupo;

        for (int j = i; j < n; j+=k)
            grupo.push_back(numbers[j]);

        sort(grupo.begin(), grupo.end());

        int aux = 0;
        for (int j = i; j < n; j += k) 
            numbers[j] = grupo[aux++];
    }

    for (int i = 1; i < n; i++) 
        if (numbers[i] < numbers[i - 1]) 
        {
            cout << "No" << '\n';
            return 0;
        }

    cout << "Yes" << '\n';

    return 0;
}