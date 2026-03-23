#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << ceil((double) (b-1) / (a-1)) << endl;
    return 0;
}