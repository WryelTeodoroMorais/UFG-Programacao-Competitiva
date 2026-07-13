#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, aux, value;
    cin >> n;
    map <int, int> numbers;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        if (aux != 3)
        {
            cin >> value;
            if (aux == 1)
                numbers[value]++;
            else
                numbers[value]--;
        }
        else
            cout << numbers.size() << '\n';
        
        if (numbers[value] == 0)
            numbers.erase(value);
    }

    return 0;
}