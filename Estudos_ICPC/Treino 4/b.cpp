#include <iostream>
using namespace std;

int main()
{
    int n, a, b, soma = 0, aux, number;
    cin >> n >> a >> b;

    for (int i = a; i <= n; i++)
    {
        aux = 0;
        number = i;
        while (number != 0)
        {
            aux += number % 10;
            number /= 10;
        }
        if (aux >= a && aux <= b)
            soma += i;
    }
       
    cout << soma << endl;

    return 0;
}