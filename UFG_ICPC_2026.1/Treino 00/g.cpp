#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    if (n % 2 == 1)
    {
        if ((n+1)/2 >= m)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    else
    {
        if (n/2 >= m)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}