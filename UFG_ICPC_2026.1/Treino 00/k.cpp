#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int c, l, cont = 0;
    cin >> c >> l;
    vector <vector <int>> pessoas(l, vector <int> (c));
    vector <set <int>> grupos(c);

    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
            cin >> pessoas[i][j];

        for (int j = 0; j < c - 1; j++)
        {
            grupos[pessoas[i][j] - 1].insert(pessoas[i][j + 1]);
            grupos[pessoas[i][j + 1] - 1].insert(pessoas[i][j]);
        }
    }

    for (int j = 0; j < c; j++)
        cont += c - 1 - grupos[j].size();
    
    cout << cont / 2 << endl;

    return 0;
}