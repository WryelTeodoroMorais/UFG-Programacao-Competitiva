#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, aux, value, c;
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
            {
                cin >> c;
                numbers[value] = numbers[value] - min(c, numbers[value]);
                
                if (numbers[value] == 0)
                    numbers.erase(value);
            }
        }
        else
        {
            int minimo = numbers.begin()->first;
            int maximo = numbers.rbegin()->first;
            cout << maximo - minimo << '\n';
        }
    }

    return 0;
}