#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n, aux, cont = 0;
    cin >> n;
    map <int, int> freq;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        freq[aux]++;
    }
    
    for (auto it : freq)
    {
        if (it.second < it.first)
            cont+=it.second;
        else
            cont+=it.second - it.first;
    }

    cout << cont << '\n';

    return 0;
}