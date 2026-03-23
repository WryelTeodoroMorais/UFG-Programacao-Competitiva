#include <iostream>
using namespace std;

int main()
{
    long int a, b, mmc, r;
    cin >> a >> b;
    long int x = a, y = b;

    while (r != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    mmc = (x * y) / a;
   
    cout << mmc << endl;

    return 0;
}