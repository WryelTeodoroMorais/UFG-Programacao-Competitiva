#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(NULL);
    cin.tie(NULL);

    string s;
    cin >> s;
    map <char, int> freq;
    map <int, int> cont;

    int tam = s.length();

    for (int i = 0; i < tam; i++)
        freq[s[i]]++;
    
    for (auto it : freq)
        cont[it.second]++;
    
    for (auto it : cont)
        if (it.second != 2)
        {
            cout << "No\n";
            return 0;
        }
    
    cout << "Yes\n";

    return 0;
}