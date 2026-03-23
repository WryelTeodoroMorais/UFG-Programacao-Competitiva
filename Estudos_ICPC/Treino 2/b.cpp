#include <iostream>
using namespace std;

int main()
{
    int x, n, aux, dif = 0;
    cin >> x >> n;
    int numbers[101] = {0};
    
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        numbers[aux] = -1;
    }
    
    while (1)
    {
        if (numbers[x-dif] == 0)
        {
            cout << x - dif << endl;
            return 0;
        }
        if (numbers[x+dif] == 0)
        {
            cout << x + dif << endl;
            return 0;
        }
        dif++;
    }

    return 0;
}