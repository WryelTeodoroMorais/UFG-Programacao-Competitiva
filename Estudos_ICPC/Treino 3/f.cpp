#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, alice = 0, bob = 0;
    cin >> n;
    int cartas[n];

    for (int i = 0; i < n; i++)
        cin >> cartas[i];

    sort(cartas, cartas + n, greater<int>());
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            alice += cartas[i];
        else
            bob += cartas[i];
    }

    cout << alice - bob << endl;

    return 0;
}