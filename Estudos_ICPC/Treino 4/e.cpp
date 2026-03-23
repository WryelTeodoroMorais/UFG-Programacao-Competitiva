#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char *a, *b;
    cin >> a >> b;
    int tam1 = strlen(a), tam2 = strlen(b);

    if (tam1 > tam2)
        cout << "GREATER" << endl;
    else if (tam2 > tam1)
        cout << "LESS" << endl;
    else
    {
        for (int i = 0; i < tam1; i++)
        {
            if (a[i] > b[i])
            {
                cout << "GREATER" << endl;
                return 0;
            }
            else if (b[i] > a[i])
            {
                cout << "LESS" << endl;
                return 0;
            }
        }
        cout << "EQUAL" << endl;
    }

    return 0;
}