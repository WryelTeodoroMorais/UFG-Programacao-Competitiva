#include <iostream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    vector <pair<int, int>> pontos = {{1, 2}, {2, 1}, {-1, 2}, {2, -1},
    {-2, 1}, {1, -2}, {-1, -2}, {-2, -1}};
    long int x1, y1, x2, y2, x, y;
    cin >> x1 >> y1 >> x2 >> y2;
    
    for (auto p : pontos)
    {
        x = x1 + p.first;
        y = y1 + p.second;
        if (pow(x2 - x, 2) + pow(y2 - y, 2) == 5)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;

    return 0;
}