#include <iostream>
using namespace std;

int main()
{
    int a, b, culpado;
    cin >> a >> b;
    
    if (a == b)
        culpado = -1;
    else
    {
        if ((a == 1 || b == 1) && (a == 2 || b == 2))
            culpado = 3;
        else if ((a == 1 || b == 1) && (a == 3 || b == 3))
            culpado = 2;
        else
            culpado = 1;
    }

    cout << culpado << endl;

    return 0;
}