#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, a, b, sup = 10e6, inf = 0, final;
    cin >> n >> m;
    
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        inf = max(inf, a);
        sup = min(sup, b);
    }

    if (sup > n)
        sup = n;

    final = sup - inf + 1;
    
    if (inf > n || final < 0)
        final = 0;

    cout << final << endl;

    return 0;
}