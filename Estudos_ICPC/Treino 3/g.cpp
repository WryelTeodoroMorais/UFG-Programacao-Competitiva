#include <iostream>
using namespace std;

int main()
{
    int n, result = 64;
    cin >> n;

    while (1)
    {
        if (result <= n)
        {
            cout << result << endl;
            break;
        }
        else
            result /= 2;
    }

    return 0;
}