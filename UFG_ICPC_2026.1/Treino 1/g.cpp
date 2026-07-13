#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, aux, maior = 0;
    cin >> n;
    map <int, int> freq;

    for (int i = 0; i < n; i++)
    {
       cin >> aux;
       freq[aux+1]++;
       freq[aux-1]++;
       freq[aux]++;
    }

    for (auto it : freq)
    {
        if (it.second > maior)
            maior = it.second;
    }

    cout << maior << '\n';
    return 0;
}