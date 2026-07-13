#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, d;
    char op[3];
    cin >> n;

    a = n / 1000;
    b = n / 100 % 10;
    c = n / 10 % 10;
    d = n % 10;

    if (a + b + c + d == 7)
    {
        op[0] = '+';
        op[1] = '+';
        op[2] = '+';
    }
    else if (a + b + c - d == 7)
    {
        op[0] = '+';
        op[1] = '+';
        op[2] = '-';
    }
    else if (a + b - c + d == 7)
    {
        op[0] = '+';
        op[1] = '-';
        op[2] = '+';
    }
    else if (a + b - c - d == 7)
    {
        op[0] = '+';
        op[1] = '-';
        op[2] = '-';
    }
    else if (a - b + c + d == 7)
    {
        op[0] = '-';
        op[1] = '+';
        op[2] = '+';
    }
    else if (a - b + c - d == 7)
    {
        op[0] = '-';
        op[1] = '+';
        op[2] = '-';
    }
    else if (a - b - c + d == 7)
    {
        op[0] = '-';
        op[1] = '-';
        op[2] = '+';
    }
    else if (a - b - c - d == 7)
    {
        op[0] = '-';
        op[1] = '-';
        op[2] = '-';
    }
    
    cout << a << op[0] << b << op[1] << c << op[2] << d << "=7" << '\n';

    return 0;
}