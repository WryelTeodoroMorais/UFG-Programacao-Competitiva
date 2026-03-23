#include <iostream>
using namespace std;

int main()
{
    int l, c, força;
    cin >> l >> c;
    int aux[l][c] = {0};
    char matriz[l][c];
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            cin >> matriz[i][j];

    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
        {
            if (matriz[i][j] != '.' && matriz[i][j] != '#')
            {
                força = matriz[i][j] - 48;
                for (int m = 0; m < l; m++)
                    for (int k = 0; k < c; k++)
                    {
                        if (abs(i - m) + abs(j - k) <= força)
                            aux[m][k] = 1;
                    }  
            }        
        }

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (aux[i][j] == 1)
                cout << ". ";
            else
                cout << matriz[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}