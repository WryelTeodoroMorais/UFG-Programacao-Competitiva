#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    long long int n, a, aux, maior = 0;
    cin >> n;
    
    for (int i = 0; i < 5; i++)
    {
        cin >> a;
        aux = ceil(double(n) / double(a)) - 1;
        maior = max(maior, aux);
    }

    cout << 5 + maior << endl;

    return 0;
}