#include <iostream>
using namespace std;

int main()
{
    int n, m, aux1, aux2;
    cin >> n >> m;
    int citys[n] = {0};

    for (int i = 0; i < m; i++)
    {
        cin >> aux1 >> aux2;
        citys[aux1 - 1]++;
        citys[aux2 - 1]++;
    }
       
    for (int i = 0; i < n; i++)
        cout << citys[i] << endl;

    return 0;
}