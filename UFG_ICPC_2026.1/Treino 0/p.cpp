#include <iostream>
using namespace std;

int main()
{
    int m[5][5], eixox, eixoy;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            cin >> m[i][j];
            if (m[i][j] == 1)
            {
                eixox = i;
                eixoy = j;
            }
        }

    cout << abs(eixox - 2) + abs(eixoy - 2) << endl;

    return 0;
}