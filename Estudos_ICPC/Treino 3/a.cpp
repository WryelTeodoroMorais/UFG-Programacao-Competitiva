#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    char c;
    cin >> x >> c >> y;

    if (y < 3)
        cout << x << '-' << endl;
    else if (y > 7)
        cout << x << '+' << endl;
    else    
        cout << x << endl;

    return 0;
}