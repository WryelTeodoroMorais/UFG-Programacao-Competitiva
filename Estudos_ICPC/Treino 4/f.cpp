#include <iostream>
using namespace std;

int main()
{
    int a, b, soma = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
        if (i % 100 == i / 1000)
            soma++;
        
    cout << soma << endl;

    return 0;
}