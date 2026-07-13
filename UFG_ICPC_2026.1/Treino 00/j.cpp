#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, tam, tam_entrada, pulo, pos;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> tam;
        tam_entrada = tam * (tam - 1) / 2;
        vector <long long int> numbers(tam_entrada);
        pulo = tam - 1;
        pos = 0;

        for (int j = 0; j < tam_entrada; j++)
            cin >> numbers[j];

        sort(numbers.begin(), numbers.end());

        for (int j = 0; j < tam - 1; j++)
        {
            cout << numbers[pos] << " ";
            pos += pulo;
            pulo--;
        }

        cout << numbers[pos-1] << endl;
    }
    
    return 0;
}