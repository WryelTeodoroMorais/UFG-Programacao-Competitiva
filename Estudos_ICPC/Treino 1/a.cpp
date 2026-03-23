#include <iostream>
using namespace std;

int main()
{
    int n, soma = 0;
    cin >> n;
    int aux = n;
    while (n >= 1)
    {
        soma += n%10;
        n /= 10;
    }
    if (aux % soma == 0)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    return 0;
}